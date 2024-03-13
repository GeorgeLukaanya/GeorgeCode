//
// Created by LTGW GEORGE on 11/8/2023.
//Appendinf to a file
#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *file=fopen("employees.txt", "a" ) ;

    fprintf(file, "\n Kelly, Customer service");
    fclose(file);
    /*Open the receipt file*/
#ifdef _WIN32
    system("notepad employees.txt");
#endif // _WIN32
    return 0;
}
