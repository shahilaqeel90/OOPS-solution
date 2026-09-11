#include<iostream>
using namespace std;
// class Employee
// {
//     static int aliveCount;
//     public:
//     Employee(){
//         aliveCount++;
//         cout<<"Employee create . Currently alive : "<<aliveCount<<endl;
//     }
//     ~Employee(){
//         aliveCount--;
//         cout<<"Employee distroyed . Currently alive : "<<aliveCount<<endl;
//     }
// };
// int Employee::aliveCount=0;
// int main(){
//     Employee e1;
//     {
//         Employee e2;
//         Employee e3;
//     }
//     cout<<"Back in main()"<<endl;
// }
class student
{
    int marks;
    string name;
    int rollno;

    public:
    static int next_rollno;
    student(string n,int m){
        name=n;
        marks=m;
        rollno=++next_rollno;
    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Roll no : "<<rollno<<endl;
    }

};
int student ::next_rollno=2503215;
int main(){
    student s1("shahil",66);
    student s2("sonu",40);
    student s3("rohit",90);
    s1.show();
    s2.show();
    s3.show();
}