#include<stdio.h>
char sayHello(char word[]);
int factorial
int main(){
    char name[50];
    int i=0;
    int isOkay=1;
    printf("Enter a name> ");

    while(isOkay){
            scanf("%c", &name[i]);
            if(name[i]=='5'){
              //  isOkay=0;
              break;
            }
            i++;
    }

   sayHello(name);

}
char sayHello(char word[]){
    printf("Hello %s", word);
    }
