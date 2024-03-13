#include<iostream>
using namespace std;

#define MKSTR( x ) #x

//The # operator causes a replacement-text token
//to be converted to a string surrounded by quotes.

int main(){
    cout<<MKSTR(HELLO C++) <<endl;
    return 0;
}