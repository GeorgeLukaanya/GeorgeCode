#include<iostream>

using namespace std;
       class Movie{
        //all this code can be used by other programs outside the class
        //for "private", only code inside the class can access the attributes  
        private:
         string rating;
        public:
        //atrributes
          string title;
          string director;
          //constructor
          Movie(string aTitle, string aDirector, string aRating){
            title=aTitle;
            director=aDirector;
            setRating(aRating);
          }
          void setRating(string aRating){
            if(aRating=="G" || aRating=="PG" || aRating=="PG-13" || aRating=="R" || aRating=="NR"){
                rating=aRating;
            }else{
                rating="NR";
            }
          }
         string getRating(){
            return rating;
         } 
       }; 
int main(){

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout<<avengers.getRating();

    return 0;
}