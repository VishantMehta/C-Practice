#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1; 

    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;

    return 0;
}
