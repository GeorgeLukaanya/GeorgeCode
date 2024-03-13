//
// Created by LTGW GEORGE on 11/8/2023.
//This is writing files
#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *file=fopen("employees.txt", "w" ) ;

    fprintf(file, "Jim, Salesman\n Oscar, Accountings\n"); 
    fclose(file);
    /*Open the receipt file*/
#ifdef _WIN32
    system("notepad employees.txt");
#endif // _WIN32
    return 0;
}
