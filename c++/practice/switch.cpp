//
// Created by LTGW GEORGE on 12/3/2023.
//
#include<iostream>
using namespace std;
string getDayOfWeek(int dayNum){
    string dayName;
    switch (dayNum) {
        case 0:
            dayName="Sunday";
            break;
        case 1:
            dayName="Monday";
            break;
        case 2:
            dayName="Tuesday";
            break;
        case 3:
            dayName="Wednesday";
            break;
        case 4:
            dayName="Thursday";
            break;
        case 5:
            dayName="Friday";
            break;
        case 6:
            dayName="Saturday";
            break;
        default:
            cout<<"You entered a wrong value.."<<endl;
    }
    return dayName;

}
int main(){
    int dayNum;
    cout<<"Enter a number from 0 to 6 t represent a day of the week:"<<endl;
    cin>>dayNum;
    cout<<getDayOfWeek(dayNum);
};