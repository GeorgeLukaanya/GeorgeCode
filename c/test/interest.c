#include<stdio.h>
int main(){
int principal,period;
float rate,si;
principal=1000;
period=3;
rate=8.5;
si=principal*period*rate/100;
printf("%f",si);
return 0;
}
