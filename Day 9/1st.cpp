#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;
    cout << "Value of num using the variable: " << num << endl;
    cout << "Value of num using the pointer: " << *ptr << endl;

    return 0;
}
