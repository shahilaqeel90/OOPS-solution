#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    string name;

public:
    static int rollno;

    Student(int m,string n) {
        marks = m;
        name=n;
        rollno=++next_rollno;
    }

    
    friend void display(Student s); // friend function
};


int Student::next_rollno = 25032154;


void display(Student s) {
    cout<<"student name :"<<s.name<<endl;
    cout << "Student marks: " << s.marks << endl;
    cout << "student rollno : " << s.rollno << endl;
}

int main() {
    Student s1(85,"sonu");
    display(s1);
    Student s2(90,"rohit");
    display(s2);
    Student s3(78,"shahil");
    
    display(s3);

    return 0;
}