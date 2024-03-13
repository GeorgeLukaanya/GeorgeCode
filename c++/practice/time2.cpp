#include<iostream>
using namespace std;
class Student{
    public:
     string name;
     string registrationNumber;
     int age;
};
class Candidate: public Student{
     int targetGpa;
};
int main(){
    //This is called inheritance where the sub class inherits the properties and methods of the parent class but can still add its own..
    Candidate candidate1;
    candidate1.name="Ssali Joseph";
    candidate1.registrationNumber="U2032/072";
    candidate1.age=15;

    cout<<candidate1.registrationNumber<<endl;
    cout<<candidate1.age<<endl;
    cout<<candidate1.name<<endl; 
}