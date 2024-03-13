#include<stdio.h>
#include<math.h>
int main(){
    int x=5,i=2;
    int y=i*x+ ++i;
    int z=i*x+ i++;
     printf("%d\n", y);
     //printf("%d\n", a);
     printf("%d\n", z);
     //printf("%d\n", a);
}
