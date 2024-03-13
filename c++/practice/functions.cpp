//
// Created by LTGW GEORGE on 12/2/2023.
//
#include<iostream>

using namespace std;
void sayHi(string name, int age);
int main(){
    sayHi("Mike",36);
    sayHi("George", 20);
    return 0;
}
void sayHi(string name, int age){
    cout << "Hello "<<name <<", you are  " <<age <<" years old." <<endl;
}