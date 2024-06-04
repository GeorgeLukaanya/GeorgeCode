#include<stdio.h>
#include<string.h>
//This is modified with data structures
typedef struct{
    char *name;
    char *number;
}
person;

int main(void){
    person people[2];

    people[0].name = "George";
    people[0].number = "0770736755";

    people[1].name = "William";
    people[1].number = "07705434229";

    for(int i = 0; i < 2; i++){
        if(strcmp(people[i].name, "George") == 0){
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}