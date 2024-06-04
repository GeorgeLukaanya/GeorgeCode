#include<stdio.h>
#include<string.h>
//This is a generic program
int main(void){
    char *names[] = {"George", "William"};
    char *numbers[] = {"0770736755", "0705434229"};

    for(int i = 0; i < 2; i++){
        if(strcmp(names[i], "George") == 0){
            printf("Found: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}