import csv
import mysql.connector 
import datetime

def get_data():
    # Connect to the database
    conn = mysql.connector.connect(
        host='localhost',
        user='root',
        password='W1m3@-d6p@55',
        database='ademnea'
    )
    cur = conn.cursor()
    
    # Define start and end dates for the query
    start_date = datetime.datetime(2024, 4, 1)
    end_date = datetime.datetime(2024, 9, 30)
    
    # Execute SQL query
    query = ("SELECT record, created_at FROM hive_weights "
             "WHERE created_at >= %s AND created_at <= %s")
    cur.execute(query, (start_date, end_date))
    data = cur.fetchall()
    
    # Close the cursor and connection
    cur.close()
    conn.close()
    
    return data

def save_data(data):
    # Save data to CSV file
    with open('/var/www/html/ademnea_website/public/prototype_data/hive_weights_APR_SEP_hive1.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile, delimiter=',')
        writer.writerow(['record', 'created_at'])
        for row in data:
            writer.writerow(row)

if __name__ == '__main__':
    data = get_data()
    save_data(data)



