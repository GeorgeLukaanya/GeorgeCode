#include<stdio.h>
int fun1(int x, int y){
    if(x==0){
        return y;
    }else{
        return fun1(x-1, x+y);
    }
}
int main(){
    int x, y;
    printf("%d", fun1(5,2));
}