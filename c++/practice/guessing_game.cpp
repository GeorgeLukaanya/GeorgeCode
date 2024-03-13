#include<iostream>
using namespace std;
int main(){
    int secretNum=7;
    int guess, guessCount=0, guessLimit=3;
    bool outOfGuesses=false;

    while(guess!=secretNum && !outOfGuesses){
        if(guessCount<guessLimit){
        cout<<"Enter guess: "<<endl;
        cin>>guess;
        cout<<"Your guess is "<<guess<<endl;
        guessCount++;
        }else{
            outOfGuesses=true;
        }
    }
    if(outOfGuesses==true){
        cout<<"You lose. " <<endl;
    }else{
    cout<<"You win!"<<endl;}
    return 0;
}