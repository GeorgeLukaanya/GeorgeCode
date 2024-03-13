#include<iostream>

using namespace std;

int main(){
    int a=21,b =10, c;
    if(a&&b){
        cout<<"Line 1 - Condition is true" <<endl;
    }

    if(a||b){
        cout<<"Line 2 - Condition is true" <<endl;
    }

    /*Let's change the values of a and b*/
    a=0;
    b=10;

    if(a&&b){//checking for non zero
        cout<<"Line 3 - Condition is true" <<endl;
    }else{
        cout<<"Line 4 - Condtion is not true"<<endl;
    }

    if(!(a&&b)){
        cout<<"Line 5 - Condition is true." <<endl;
    }
    return 0;
}
    
    
    
    
