#include <iostream>
using namespace std;

int main() {
    int stack[100], n, top = -1, value;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "\nEnter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        stack[++top] = value;
    }

    cout << "\nPopping all elements from the stack: ";
    while (top != -1) {
        cout << stack[top--] << " ";
    }
    cout << endl;

    return 0;
}
