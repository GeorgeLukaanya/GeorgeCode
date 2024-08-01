'''students = ['George', 'Bob', 'Jacob', 'Joab', 'Joan', 'Jim', 'John']
marks = [12, 34, 14, 123, 15, 16, 78]

for i in range(len(students)):
    print(f"{students[i]}: {marks[i]}")'''

list_of_marks = [40, 80, 50, 40, 23, 34, 99]

for mark in list_of_marks:
    if mark >= 80:
        print(f"{mark + 2} : Excellent")#using an fstring and making calculations in the brackets
    elif mark >= 50:
        print(f"{mark} : Good")
    elif mark >= 40:
        print(f"{mark} : Bad")
    else:
        print(f"{mark} : Neutral")

