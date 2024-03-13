#include<iostream>

using namespace std;

#define concat(a, b) a ## b

//When CONCAT appears in the program, its arguments are
//concatenated and used to replace the macro

int main(){
    int xy=100;
    string dog="This is a dog";
    string str1="Hello World";

    cout<<concat(x, y)<< endl;
    cout<< concat(str, 1)<<endl;
    cout<< concat(d, og)<<endl;
    return 0;
}