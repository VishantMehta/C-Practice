#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to count: ";
    cin >> ch;

    int result = countCharacter(str, ch);
    cout << result << endl;

    return 0;
}
