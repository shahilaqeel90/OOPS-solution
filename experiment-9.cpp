#include <iostream>
using namespace std;

class student {
public:
    int rollno;
    string name;

    void input() {
        cout << "Enter rollno: ";
        cin >> rollno;

        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Rollno : " << rollno << endl;
        cout << "Name : " << name << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of objects
    student *students = new student[n];

    // Input using pointer to objects
    for (int i = 0; i < n; i++) {
        cout << "Student: " << i + 1 << endl;
        students[i].input();
    }

    // Display
    cout << "Student Details:" << endl;

    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    
    

    return 0;
}