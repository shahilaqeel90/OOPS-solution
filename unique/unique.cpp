#include <iostream>
#include <memory>
using namespace std;
class Student{
    public:
    void display(){
        cout << "Student object is created." <<endl;
    }
};

int main(){
    unique_ptr<Student> ptr = make_unique<Student>():
    ptr->display()
}