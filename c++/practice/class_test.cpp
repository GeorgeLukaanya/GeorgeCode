//
// Created by LTGW GEORGE on 12/6/2023.
//
#include <iostream>

class Book{
public:
  string author;
  string name;
  int pages;
  int yearOfPublication;
};
using namespace std;
int main(){
  Book book1;
  book1.name="The Words of this Life";
  book1.author="Lukaanya George";
  book1.pages=500;
  book1.yearOfPublication=2020;

  cout<<book1.name<<endl;
}