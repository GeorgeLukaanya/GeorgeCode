//data strcuture where different data types can  be stored ie to model real life entities
#include<stdio.h>
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};
int main(){
    struct Student student1;
    student1.age=22;
    student1.gpa=3.2;
    strcpy(student1.name,"Lukaanya George");
    strcpy(student1.major,"Computer Science");
    printf("%s", student1.name);
    return 0;
}
