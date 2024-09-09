#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {
        while(left < right && !isalnum(str[left])) {
            left++;
        }
        while(left < right && !isalnum(str[right])) {
            right--;
        }
        if(tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;  }

int main() {
    string inputStr;

    // Testing
    cout << "Enter a string: ";
    getline(cin, inputStr);
     if(isPalindrome(inputStr)) {
        cout << "\"" << inputStr << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputStr << "\" is not a palindrome." << endl;
    }

    return 0;
 
}