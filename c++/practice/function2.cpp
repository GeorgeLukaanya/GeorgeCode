//
// Created by LTGW GEORGE on 12/2/2023.
//
#include<iostream>
using namespace std;
double cube();

int main(){
    cout<<cube();

    return 0;
}
double cube() {
    double num,result;
    cout<<"Enter a number to cube: " <<endl;
    cin>>num;
    result=num*num*num;
    return result;
}
