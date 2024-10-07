#include<stdio.h>

int main(void){
    //Primpting the user to enter preferred array size
    int value;
    printf("Enter the array size:");
    scanf("%d", &value);
    int scores[value];

    //Entering the scores manually
    printf("\nEnter the scores:\n");
    for (int j = 0; j < value; j++){
        printf("Score %d: ", (j+1));
        scanf("%d", &scores[j]);
    }

    //Printing the scores
    int size = sizeof(scores)/sizeof(scores[0]);
    for (int i = 0; i < size; i++){
        printf("%d\n", scores[i]);
    }
}