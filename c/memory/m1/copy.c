#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//the goal is to make a 2nd copy of the string to t from s
int main(void)
{
    char* s=get_string("s: ");
    if(s==NULL){
        return 1;
    }

    char* t=malloc(strlen(s)+1);
    if(t==NULL){
        return 1
    }
    strcpy(t ,s)
/*//copying the characters of s to t
    for(int i=0, n=strlen(s); i<=n; i++){
        t[i]=s[i];
    }

    if(strlen(t)>0){
    t[0]=toupper(t[0]);
    }*/

    printf("%s\n", s);
    printf("%s\n", t);
    free(t);
    return 0;
    //NULL: the address 0
    }
