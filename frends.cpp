#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    student(){
        marks=90;
    }
    friend void display(student s);
};
void display(student s){
    cout<<"Marks = "<<marks<<endl;
}