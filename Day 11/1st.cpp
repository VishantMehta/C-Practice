#include <iostream>
using namespace std;

class ArrayChecker {
private:
    int* arr;
    int size;

public:
    ArrayChecker(int size) {
        this->size = size;
        arr = new int[size];
    }

    void inputArray() {
        cout << "Enter " << size << " elements of the array: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void checkTargetExists(int target) {
        bool found = false;

        for(int i = 0; i < size; i++) {
            if(arr[i] == target) {
                found = true;
                break;
            }
        }

        if(found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
};

int main() {
    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;

    ArrayChecker checker(size);

    checker.inputArray();

    cout << "Enter the target value: ";
    cin >> target;

    checker.checkTargetExists(target);

    return 0;
}
