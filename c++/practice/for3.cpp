#include<iostream>

using namespace std;

int main(){
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(i=1;i<=5;i++){
        for(j=4;j>=i;j--){
            cout<<i;
        }
        cout<<endl;
    }
}