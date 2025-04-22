#include<iostream>
using namespace std;

class Vehicle{
    protected:
        string brand;
        int year;
        
    public:
        string* br=&brand;
        int* yr=&year;
        Vehicle(){
            brand="no brand";
            year=0;
        }
        Vehicle(string b,int y){
            *br=b;
            *yr=y;
            cout<<"\nCar "<<*br<<" from "<<*yr<<" created.";
        }
        void showInfo(){
            cout<<"\nBrand: "<<*br<<"\nYear: "<<*yr;
        }
        void startEngine(){
            cout<<"Starting engine of Vehicle";
        }
};

class Car : public Vehicle{
    protected:
        int numDoors=5;

    public:
    Car():Vehicle(){
        numDoors=0;
    }
    Car(string brand,int year):Vehicle(brand,year){}

    void showInfo(){
        cout<<"\nBrand: "<<*br<<"\nYear: "<<*yr<<"\nNumber of doors: "<<numDoors;
    }

    void startEngine(){
        cout<<"Car engine is starting!";
    }
};

int main(){
    Vehicle v1("bobin",1984);
    v1.showInfo();
    
    Car c1("car",2021);
    c1.showInfo();
}   