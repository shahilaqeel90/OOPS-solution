#include <iostream>
using namespace std;

class Calculator {
public:
    class Operations {
    public:
        class Addition {
        public:
            int addnos(int a, int b) {
                return a + b;
            }

            int addnos(int a, int b, int c) {
                return a + b + c;
            }

            double addnos(double a, double b) {
                return a + b;
            }
        };


        class Multiplication {
        public:
            int mulnos(int a, int b) {
                return a * b;
            }

            int mulnos(int a, int b, int c) {
                return a * b * c;
            }

            double mulnos(double a, double b) {
                return a * b;
            }
        };

    };
};

int main() {
    Calculator::Operations::Addition addObj;

    Calculator::Operations::Multiplication mulObj;


    cout << "Addition (2 ints): " << addObj.addnos(10, 20) << endl;
    cout << "Addition (3 ints): " << addObj.addnos(5, 15, 25) << endl;
    cout << "Addition (double): " << addObj.addnos(5.5, 4.5) << endl;


    

    return 0;
}