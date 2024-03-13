//
// Created by LTGW GEORGE on 11/29/2023.
//
#include<iostream>

using namespace std;

int main(){
    int age;
    string name;
    cout<<"Enter your name>> " <<endl;
    getline(cin, name );
    cout<<"Enter your age>> "<<endl;
    cin>>age;
    cout<<"You are "<< name << " and are " <<age<<" years old. " <<endl;
return 0;
}