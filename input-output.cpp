#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    void display()
    {
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main(){
    Student students[3];
    for(int i=0;i<3;i++){
        cout<<"student "<<i+1<<endl;
        students[i].input();
        cout<<"Enter Roll No : ";
        cin>>students[i].rollno;
        cout<<"Enter Name : ";
        cin>>students[i].name;
    }
    for(int i=0;i<3;i++){
        students[i].display();
    }
}