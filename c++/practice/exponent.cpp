#include<iostream>

using namespace std;
//The function allows to loop through the loop power number times while multiplying the base number every number.
int power(int baseNum, int powNum){
    int result = 1;
    for(int i=0; i<powNum;i++){
        result=result*baseNum;
    }
    return result;
}
int main(){
    int baseNum, powNum;
    cout<<"Enter the base number: "<<endl;
    cin>>baseNum;
    cout<<"Enter the power to ehich to raise the number"<<endl;
    cin>>powNum;
    cout<<power(baseNum,powNum);
    return 0;
}