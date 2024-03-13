#include<stdio.h>
#include<math.h>
int main(){
    int i=0;
    while(i<7){
        int m=pow(2,i);
        printf("%3d %3d\n", i, m);
        i=i+1;
    }
    printf("\n");
}
