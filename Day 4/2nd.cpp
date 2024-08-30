#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}