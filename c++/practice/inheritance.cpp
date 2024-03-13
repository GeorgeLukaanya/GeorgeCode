#include<iostream>

using namespace std;

//super class
class Chef{
    public:
      void makeChicken(){
        cout<<"The chef makes chicken" <<endl;
      }
       void makeSalad(){
        cout<<"The chef makes Salad" <<endl;
      }
       void makeSpecialDish(){
        cout<<"The chef makes bbq ribs" <<endl;
      }
};
//subclass
class ItalianChef:public Chef{
    public:
    void makePasta(){
        cout<<"The Italian chef makes pasta"<<endl;
    }
    //This is called overriding
    void makeSpecialDish(){
        cout<<"The Italian chef makes chicken parm" <<endl;
    }
};
//Demonstrating inheritance:inheriting the attributes and methods of a class with ability to extend your own..
int main(){
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    return 0;
}