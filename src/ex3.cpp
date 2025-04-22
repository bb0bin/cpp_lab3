#include<iostream>
using namespace std;

class Car{
    private:
        string brand;
        int year;
        
    public:
        string* br=&brand;
        int* yr=&year;
        Car(string b,int y){
            *br=b;
            *yr=y;
            cout<<"\nCar "<<*br<<" from "<<*yr<<" created.";
        }
        ~Car(){
            cout<<"Car "<<*br<<" destroyed.";
            delete br;
            delete yr;
        }
        void showInfo(){
            cout<<"\nBrand: "<<*br<<"\nYear: "<<*yr;
        }
        void test(){
            cout<<brand<<year;
        }
};

int main(){
    Car* c1=new Car("bobin",1984);
    c1->showInfo();

    delete c1;
    test();
}    