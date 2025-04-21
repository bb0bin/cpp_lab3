#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int age;
        char grade;
        string group = "2025 group";
    public:
        string n;
        int a;
        char g;

        void setName(string ntemp){ 
            name=ntemp;
        }
        void setAge(int atemp){     
            age=atemp;
        }
        void setGrade(char gtemp){  
            grade=gtemp;
        }

        string getName(){
            n=name;
            return n;
        }
        int getAge(){
            a=age;
            return a;
        }
        char getGrade(){
            g=grade;
            return g;
        }

        void displayInfo(){
            char input;
            cout<<"What do you want to access? (n = name, a = age, g = grade) ";
            cin>>input;

            switch(input){
                case 'n':
                    cout<<"\nName: "<<getName();
                    break;

                case 'a':
                    cout<<"\nAge: "<<getAge();
                    break;
                
                case 'g':
                    cout<<"\nGrade: "<<getGrade();
                    break;
            };
        }
};

int main(){
    student s1;

    s1.setName("Robin");
    s1.setAge(21);
    s1.setGrade('4');

    s1.displayInfo();
}