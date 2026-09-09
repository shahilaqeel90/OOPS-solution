#include<iostream>
using namespace std;
class student{
    public:
    int marks;
};
void display(const student& s){
    cout<<s.marks;
}
int main(){
    student st{90};
    display(st);
}
