//
// Created by LTGW GEORGE on 11/8/2023.
//This is reading a file
#include<stdio.h>
#include<stdlib.h>
int main(){

    char line[255];
    FILE *file=fopen("john.txt", "w" ) ;

    fgets(line, 255, file);
    fgets(line, 255, file);
    printf("%s", line);
    fclose(file);

    return 0;
}
