#include <iostream>
using namespace std;

// Doing with using class

class ArraySearcher {
private:
    int* arr;
    int size;

public:
    ArraySearcher(int size) {
        this->size = size;
        arr = new int[size];
    }

    
    void inputArray() {
        cout << "Enter " << size << " elements of the array: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    int findTargetIndex(int target) {
        for(int i = 0; i < size; i++) {
            if(arr[i] == target) {
                return i + 1;  
            }
        }
        return -1;  
    }
};

int main() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    ArraySearcher searcher(size);

    searcher.inputArray();

    cout << "Enter the target value: ";
    cin >> target;

    int index = searcher.findTargetIndex(target);
    
    cout << "Output: " << index << endl;

    return 0;
}
