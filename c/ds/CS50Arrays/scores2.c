#include<stdio.h>

const int N = 3;

float average(int lenght, int array[]);

int main(void){
    int scores[N];

    printf("\nEnter the scores:\n");
    for (int i = 0; i < N; i++){
        printf("Score %d: ", (i+1));
        scanf("%d", &scores[i]);
    }

    printf("Average: %f\n", average(N, scores));
    return 0;
}

float average(int length, int array[]){
    int sum = 0;
    for(int j = 0; j < length; j++){
        sum += array[j];
    }
    return sum/(float)length;
}