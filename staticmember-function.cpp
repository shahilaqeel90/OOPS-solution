#include<iostream>
using namespace std;
class Student
{
    public:
    static int totalStudents;
    Student(){
        totalStudents++;
    }
};
int Student::totalStudents=0;
int main(){
    Student s1,s2,s3,s4,s5,s6,s7;
    cout<<"Total Student : "<<Student::totalStudents<<endl;
     Students::showCount();

}

class Students
{
    public:
    static int totalStudents;
     static void showCount(){
        cout<<"Count : "<<totalStudents<<endl;
    }
};
// int Student::totalStudents=0;
// int main(){
//     Student::showCount();
// }

