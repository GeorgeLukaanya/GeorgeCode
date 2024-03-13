#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<100; i++){
        if(i%2==0){
          continue;//skip the rest of the code for i=2
        }
        cout<<i<<"\n";
    }
}