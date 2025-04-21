#include<iostream>
using namespace std;

class Car{
    private:
        string brand;
        int year;
    public:
        void Constructor(){     //lets user create a car of choice
            string b;
            int y;
            cout<<"\nBrand: ";
            cin>>b;
            cout<<"\nYear: ";
            cin>>y;
            brand=b;
            year=y;
            cout<<"Car "<<b<<" from "<<y<<" created.";
        }
        void Destructor(){
            year=0;
            cout<<"\nCar "<<brand<<" destroyed.";
            brand="NULL";
        }
        void showInfo(){
            cout<<"\nBrand: "<<brand<<"\nYear: "<<year;
        }
};

int main(){
    Car car1;
    car1.Constructor();
    car1.showInfo();
    car1.Destructor();
}    