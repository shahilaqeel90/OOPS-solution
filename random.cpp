#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    student(int m){
        marks=m;
    }
    friend void compare(student s1,student s2);
};
void compare(student s1,student s2){
    if(s1.marks>s2.marks){
        cout<<"student 1 score more"<<endl;
    }
}