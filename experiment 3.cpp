#include <iostream>
using namespace std;

class demo {
public:
    // Function Overloading
    void show() {
        cout << "Show with no value" << endl;
    }

    void show(int a) {
        cout << "Show with one value: " << a << endl;
    }

    void show(int a, int b) {
        cout << "Addition of two values: " << a + b << endl;
    }
};

// Inline Function
inline int area(int a, int b) {
    return a * b;
}

// Function with Default Arguments
int add(int a = 7, int b = 9) {
    return a + b;
}

int main() {
    int c;

    // Default Arguments
    cout << "add() = " << add() << endl;          // Uses 7 and 9
    cout << "add(5) = " << add(5) << endl;        // Uses 5 and default 9
    cout << "add(7,9) = " << add(7, 9) << endl;   // Uses both arguments

    demo obj;

    // Function Overloading
    obj.show();
    obj.show(5);
    obj.show(5, 10);

    // Inline Function
    cout << "Area of Rectangle: " << area(5, 6) << endl;

    return 0;
}