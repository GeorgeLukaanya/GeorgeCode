#include<stdio.h>
int main(void)
{

    int num;
    int lineCount;

    printf("Enter an integer between 1 and 100:");
    scanf("%d", &num);

    //if(num>100)
        //num=100;

    lineCount=0;
    while(num>0){
        if(lineCount<20)
            lineCount++;
        else{
            printf("\n");
            lineCount=1;
        }
        printf("%4d", num--);
    }
    return 0;
}
