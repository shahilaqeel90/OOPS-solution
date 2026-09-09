#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
};

// Object passed as argument and object returned
Point addPoints(Point p1, Point p2) {
    Point result;

    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

int main() {

    Point p1(10,20);
    Point p2(30,40);

    Point p3 = addPoints(p1, p2);

    cout << "Point 1: " << p1.x << " " << p1.y << endl;
    cout << "Point 2: " << p2.x << " " << p2.y << endl;
    cout << "Sum    : " << p3.x << " " << p3.y << endl;

    return 0;
}