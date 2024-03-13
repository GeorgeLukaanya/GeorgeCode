#include <stdio.h>
int main(){
    double a[6];
    int b[6],d = 0;
    while(d < 5){
        printf("Enter couse unit(%d) score in percent: ", d + 1);
        scanf("%lf", &a[d]);
        printf("Enter its credit units: ");
        scanf("%d", &b[d]);
        d = d + 1;
    }
    d = -1;
    while(d < 5){
        d = d + 1;
        if(80 <= a[d]){
            a[d] = 5.0;
            continue;
        }
        else if(75 <= a[d]){
            a[d] = 4.5;
            continue;
        }
        else if(70 <= a[d]){
            a[d] = 4.0;
            continue;
        }
        else if(65 <= a[d]){
            a[d] = 3.5;
            continue;
        }
        else if(60 <= a[d]){
            a[d] = 3.0;
            continue;
        }
        else if(55 <= a[d]){
            a[d] = 2.5;
            continue;
        }
        else if(50 <= a[d]){
            a[d] = 2.0;
        }
    }
    d = 0;
    double sum = 0, sum1 = 0, pdt;
    while(d < 5){
        pdt = a[d] * b[d];
        sum = sum + pdt;
        sum1 = sum1 + b[d];
        d = d + 1;
    }
    double cgpa = sum / sum1;
    printf("Your CGPA is %.2lf\n", cgpa);
    return 0;
}