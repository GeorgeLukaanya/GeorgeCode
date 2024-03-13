#include<stdio.h>

int main(){
    char grade;
    printf("The Grade should be A, B, C, D, E or F.\n");
    printf("Enter your grade:\n");
    scanf(" %c", &grade);

    if(grade=='A'){
         printf("You did great!");
    }else if(grade=='B'){
         printf("You did alright!");
    }else if(grade=='C'){
         printf("You did poorly!");
    }else if(grade=='D'){
         printf("You did bad!");
    }else if(grade=='E'){
         printf("You did very bad!");
    }else if(grade=='F'){
         printf("You failed!");
    }else{
         printf("Invalid Grade!");
    }
    return 0;
}

