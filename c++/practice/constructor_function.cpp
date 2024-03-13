#include<iostream>

using namespace std;

class Book{
    public:
       string title;
       string author;
       int pages;
       Book(){
        title="no title";
        author="no author";
        pages=0; 
       }
       Book(string aTitle, string aAuthor, int aPages){
        //This is a special function that will be called whenever instatiation is done
        title=aTitle;
        author=aAuthor;
        pages=aPages;
        
       }
};
int main(){
    Book book1("Harry Potter", "J.K.Rowling", 500);
    cout<<book1.title;

    Book book2("Lord of the Rings","Tolkein",700);

    return 0;
}