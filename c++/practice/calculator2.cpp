//
// Created by LTGW GEORGE on 12/3/2023.
//
#include<iostream>

using namespace std;
int main(){
    int num1, num2, result;
    char op;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter the operator:: "<<endl;
    cin>>op;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
if(op=='+'){
    result=num1+num2;
}else if(op=='-'){
    result=num1-num2;
}else if(op=='/'){
    result=num1/num2;
}else if(op=='*'){
    result=num1*num2;
}else if(op=='%'){
    result=num1%num2;
}else{
    cout<<"You've entered a wrong operator!"<<endl;
}
cout<<result<<endl;
}