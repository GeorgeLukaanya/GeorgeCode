#include<stdio.h>
int main(){ 
    float obs[10];
    int i;
     //printf("%d",num[3]);
   for(i=0; i<10; i++){
        obs[i]=(i+5)*0.5;
   }
   for(i=0; i<10; i++){
      if(i%5==0){
        printf("\n");
        printf("%2.1f", obs[i]);
      }
   }
    return 0;
}