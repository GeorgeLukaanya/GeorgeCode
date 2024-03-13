#include<stdio.h>
int main(void)
{

    int num;
    int lineCount;

    printf("Enter an integer between 1 and 100:");
    scanf("%d", &num);

    //if(num>100)
        //num=100;
     int sum=0;
    lineCount=0;
    for(int i=num;i>0;i--){
    sum=sum+i;

        printf("%4d", i);
    }
    return 0;
}


