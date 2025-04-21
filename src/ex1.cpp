#include<iostream>
using namespace std;

class book{
    private:
        string title = "Peter's Guide to Handy-manisms";
        int pages;
        string author = "Peter";
        
    protected:
        float price;
    public:
        string publisher;
        void displayAuthorInfo(){
            cout<<"\nAuthor: "<<author;
        }
};

int main(){
    book book1;
    book1.displayAuthorInfo();
    
    book1.publisher = "Grand Open House";
    cout<< "\nPublisher: "<<book1.publisher;

}