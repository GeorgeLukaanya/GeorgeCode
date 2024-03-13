#include<iostream>
using namespace std;
class Car{
    public:
    string carName;
    string countryOfOrigin;
    int yearOfManufacture;
    Car(string aCarName, string aCountryOfOrigin, int aYearOfManufacture){
        carName=aCarName;
        countryOfOrigin=aCountryOfOrigin;
        yearOfManufacture=aYearOfManufacture;
    }
};
int main(){
    Car car1("Toyota Prius", "Japan",2010);
    Car car2("Range Rover", "United Kingdom", 2015);
    /*Car car1;
    car1.carName="Toyota Prius";
    car1.countryOfOrigin="Japan";
    car1.yearOfManufacture=2010;

    Car car2;
    car2.carName="Range Rover";
    car2.countryOfOrigin="United Kingdom";
    car2.yearOfManufacture=2015;*/
cout<<car1.countryOfOrigin <<endl;
cout<<car1.carName<<endl;
cout<<car1.yearOfManufacture<<endl;
}