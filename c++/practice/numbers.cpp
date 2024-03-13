//
// Created by LTGW GEORGE on 11/29/2023.
//
#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int wnum=5;
    double dnum=5.5;
    wnum+=80;

    cout <<pow(2,5) <<endl;
    cout <<sqrt(36) <<endl;
    cout <<round(4.56) <<endl;
    cout <<ceil(4.2)<<endl;
    cout <<floor(4.8)<<endl;
    cout <<fmax(3,10)<<endl;
    cout <<fmin(3,10)<<endl;
    //in C+, <cmath> pow(2,50) is a power function
//when an operation is done between integers, an integer is always returned
//when an operation is between an integer and a double, a double is returned
//same for doubles,  a double result is returned
    return 0;
}