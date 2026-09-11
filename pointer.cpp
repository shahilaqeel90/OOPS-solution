#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    void display()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name   : "<<name<<endl;
    }
};
int main(){
    Student s;
    s.rollno=101;
    s.name="shahil";
    Student *ptr=&s;
    ptr->display();
    // s.display();
}