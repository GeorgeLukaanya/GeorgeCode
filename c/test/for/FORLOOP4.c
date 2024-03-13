#include<stdio.h>
#include <tgmath.h>

float mean(int marks[], int n);

float sd(float grades[], int n);

int main(void) {
    int size = 3;
    float grades[] = {88.6, 80.8, 90.2, 93.5, 100.0, 98.6};
    float abisha[] = {90.0, 81.7, 83.7, 93.6, 80.0, 90.0};
    //float grades[size];
    int marks[3][3] = {{88, 80, 90},
                       {90, 81, 83},
                       {92, 84, 85}};
    for (int k = 0; k < 3; k ++) {
        float stand = sd(marks[k], size);
        printf("The standard deviation is %.2f\n", stand);
    }
    /*sd(abisha, size);
    sd(grades,size);*/

}

float mean(int marks[], int n) {
    float sum;
    for (int i = 0; i < n; i ++) {
        sum = sum + marks[i];
        printf("%d\n", marks[i]);
    }
    float average = sum / n;
    return average;
}

float sd(float grades[], int size) {
    float squareSum = 0;
    for (int i = 0; i < size; i ++) {
        //grades[i]=i*5;
        float square = grades[i] * grades[i];
        squareSum += square;
    }
    /*printf("Enter an integer between 1 and 100:");
    scanf("%d", &num);*/

    //if(num>100)
    //num=100;
    float sum = 0;
    //lineCount=0;
    float average = mean(grades, size);
    float standardDeviation =  sqrt((squareSum / size) - (average * average));
    printf("Standard Deviation = %.2f and mean is %.2f\n", standardDeviation, average);
    return standardDeviation;
}


