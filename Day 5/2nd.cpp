#include <iostream>
#include <string>
using namespace std;

void reverseString(const string& str) {
    string reversed = str;
    int n = reversed.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversed[i], reversed[n - i - 1]);
    }
    cout << "Reversed string: " << reversed << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    reverseString(input);

    return 0;
}
