#include <iostream>
using namespace std;

bool searchKeyIn2DArray(int arr[][100], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                return true;  
            }
        }
    }
    return false; 
}

int main() {
    int rows, cols, key;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];
    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the key to search: ";
    cin >> key;

    if (searchKeyIn2DArray(arr, rows, cols, key)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
