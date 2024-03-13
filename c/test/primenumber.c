#include <stdio.h>
int main(){
    int n, i;
   /* printf("Enter lower boundary: \n");
    scanf("%d", &n);*/
   n=2;
    int k;
    printf("Enter upper boundary:  \n");
    scanf("%d", &k);
    for(i=n; i < k; i++){
        while((i%n)>0){
        n++;
        }
        if(n == i){
            printf("%d \t", i);
        }
        n = 2;
    }
    printf("\n\n");
    return 0;
}