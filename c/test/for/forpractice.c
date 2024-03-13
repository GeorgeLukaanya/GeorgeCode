#include<stdio.h>
#include<math.h>
int main(){
    int i;
    for(i=0;i<7;i++){
        int m=pow(2,i);
        printf("%3d %3d\n", i, m);
    }
    printf("\n");
}
