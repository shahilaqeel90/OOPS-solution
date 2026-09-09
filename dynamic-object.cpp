#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main(){
    Employee *emp=new Employee;
    emp->id=101;
    emp->name="shahil";
    emp->display();
    delete emp;
}