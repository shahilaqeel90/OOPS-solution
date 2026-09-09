#include<iostream>
using namespace std;
class student{
    int roll_no,marks;
    string name;
    public:
    student(){
        roll_no=166;
        marks=80;
        name="shahil aqeel";
    }
    student(int a,string b,int c){
        roll_no=a;
        marks=c;
        name=b;

    }
    student(const student& s){
        roll_no=s.roll_no;
        name=s.name;
        marks=s.marks;
    }
    ~student(){
        cout<<"destructor"<<endl;
    }
    void display(){
        cout<<"Roll no : "<<roll_no<<endl;
        cout<<"marks   : "<<marks<<endl;
        cout<<"Name    : "<<name<<endl;
    }
};
int main(){
    student s;
    s.display();
    cout<<"-------------------"<<endl;

    student s1(6,"shahil",85);
    s1.display();
    cout<<"-------------------"<<endl;

    student s2(6,"shahil",85);
   

    student s3(s2);
    s3.display();
    cout<<"-------------------"<<endl;

    s.~student();
    

}