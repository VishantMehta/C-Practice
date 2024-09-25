#include <bits/stdc++.h>
using namespace std;

int main() {
    int stack[100], n, top = -1, value;

    cout << "Enter the size of the stack: ";
    cin >> n;
    cout << "\nEnter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        if (top == n - 1) {
            cout << "Stack Overflow!" << endl;
            break;
        } else {
            stack[++top] = value;
        }
    }

    cout << "Elements in stack are: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
