#include<stdio.h>
float mean(int marks[], int n);
float sd(float grades[], int n);
int main(void)
{
int size=3;
int marks[3][3]={{88,80,90},
{90,81,83},{92,84,85}};
for(int k=0;k<3;k++){
    for(int m=0;m<3;m++){
        if(marks[k][m]%2==0){
            printf("%d,", marks[k][m]);
         }
    printf("\n");

    }
}
}
float mean(int marks[], int n){
    float sum;
    for(int i=0;i<n;i++){
        sum=sum+marks[i];
        printf("%d\n", marks[i]);
    }
    float average=sum/n;
    return average;
}
float sd(float grades[], int size){
    float squareSum=0;
for(int i=0;i<size;i++){
    float square=grades[i]*grades[i];
    squareSum+=square;
    }
     float sum=0;
float average=mean(grades, size);
float standardDeviation=sqrt((squareSum/size)-(average*average));
printf("Standard Deviation = %.2f and mean is %.2f\n", standardDeviation, average);
return standardDeviation;}


