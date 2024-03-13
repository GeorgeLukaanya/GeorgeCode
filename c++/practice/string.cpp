//
// Created by LTGW GEORGE on 11/29/2023.
//
#include<iostream>

using namespace std;
int main(){
    string phrase="Giraffe Academy";
    string phrase_sub=phrase.substr(8, 3);
   // phrase[0]='F'; This statement replaces G by F
    cout << phrase_sub;
//.length function tells how many characters are in the string
//phrase.find("Academy", starting index)  starts searching for the string "Academy" from index position 0
//.substr(starting index, number of characters ) allows to grab a part of the string
return 0;
}