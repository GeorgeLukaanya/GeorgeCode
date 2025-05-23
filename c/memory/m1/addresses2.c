#include<stdio.h>

int main(void){
    char *s="HI!";

    //pointer arithmetic 
   printf("%c\n",*s);
   printf("%c\n",*(s+1));
   printf("%c\n",*(s+2));
  /*printf("%c\n",s[1]);
   printf("%c\n",s[2]);
   printf("%c\n",s[3]);*/
}