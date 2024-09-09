#include <iostream>
using namespace std;

int main() {
    int num = 42; 
    int* ptr = &num;
    int** ptrToPtr = &ptr;  
    cout << "Value of num using the variable: " << num << endl;

    cout << "Value of num using the pointer: " << *ptr << endl;

    cout << "Value of num using the pointer to pointer: " << **ptrToPtr << endl;

    return 0;
}
