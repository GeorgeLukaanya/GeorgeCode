//
// Created by LTGW GEORGE on 12/3/2023.
//
#include<iostream>
using namespace std;
void large(double num1, double num2, double num3);
int main(){
    double num1, num2, num3;
    cout<< "Enter first number: "<<endl;
    cin>>num1;
    cout<< "Enter second number: "<<endl;
    cin>>num2;
    cout<< "Enter third number: "<<endl;
    cin>>num3;

    large(num1, num2, num3);
    return 0;
}
void large(double num1, double num2, double num3){
    if(num1>num2 && num1>num3){
        cout<<num1 <<" is the largest"<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<num2 <<" is the largest."<<endl;
    }else if(num3>num1 && num3>num2){
        cout<<num3 <<" is the largest."<<endl;
    }else{
        cout<<"The numbers are equal";
    }
}
