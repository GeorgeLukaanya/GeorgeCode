//
// Created by LTGW GEORGE on 11/11/2023.
//
#include<stdio.h>
/*print Fahrenheit-Celcius table
 for fahr = 0, 20, ..., 300 */
int main(){
    float fahr, celcius;
    int lower, upper, step;

    lower=0;               /*lower limit of temperature table*/
    upper=300;             /*upper limit*/
    step=20;               /*step size*/

    fahr=lower;
    printf("Table showing Temperatures\t\n");
    while(fahr<=upper){
        celcius=5*(fahr-32)/9;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr=fahr+step;
    }
    return 0;
}