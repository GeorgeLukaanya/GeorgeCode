#include<stdio.h>
#include<stdlib.h>

int main(){
    int *x=malloc(3*sizeof(int));//=int x[3]
    x[0]=72;
    x[1]=73;
    x[2]=33;
    free(x);
    }
