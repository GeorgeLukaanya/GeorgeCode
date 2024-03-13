#include<iostream>

using namespace std;

class Book{
    public:
       string title;
       string author;
       int pages;
};
int main(){
    Book book1;
    book1.title="Harry Porter";
    book1.author="J.K.Rowling";
    book1.pages=500;
    
    Book book2;
    book2.title="Lord of The Rings";
    book2.author="Tolkein";
    book2.pages=700;
    book2.title="Hunger Games";

    cout<<book2.author<<endl;
    return 0;
}