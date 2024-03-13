
/*//doubles odd numbers and squares even numbers
#include<stdio.h>
#include<math.h>
int main(){
    int n, i, m;
    n=20;
    for(i=0; i<=n; i++){
        if(i%2==0){
            m=pow(i, 2);
            printf("%3d\n", m);
        }else{
            m=2*i;
            printf("%3d\n", m);
        }
    }
    return 0;
}*/
/*//Evaluates the first 20 numbers from 0 to check for even and odd numbers
#include<stdio.h>
int main(){
    int n, i;
    n=20;
    for(i=0; i<=n; i++){
        if(i%2==0){
            printf("%3d : %d is an even number\n", i, i);
        }else{
            printf("%3d : %d is an odd number\n", i, i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i, n, sum;
    i=3;
    sum=0;
    while(i<=9){
        //printf("%d\n", i);
        sum+=i;
        i+=3;
    }
    printf("%d\n", sum);
    return 0;}*/
/*//sum of the first five multiples of 6
#include<stdio.h>
int main(){
    int i, n, sum;
    i=6;
    sum=0;
    do{
        //printf("%d\n", i);
        sum+=i;
        i+=6;
    }
    while(i<=36);
    printf("%d\n", sum);
    return 0;
}*/
/*//The factors of 5
#include<stdio.h>
int main(){
    int i, n;
    n=5;
    for(i=1;i<=n;i++){
        if(5%i==0){
    printf("%d\n", i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i,j,m=3,n=6;
    for(i=1;i<=n;++i){
        for(j=0;j<i;++j){
            printf("*",j);
        }
        printf("\n");
    }
    return 0;
}*/