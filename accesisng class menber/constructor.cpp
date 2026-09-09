#include<iostream>
using namespace std;
class Student{
    private:
    int id;
    public:
    Student(){
        id=0;
    }
    void display(){
        cout<<id;
    }
};
int main(){
    Student obj;
    obj.display();
}