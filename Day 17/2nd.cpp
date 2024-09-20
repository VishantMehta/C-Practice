#include <iostream>
using namespace std;

int sumOf2DArray(int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];
    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int totalSum = sumOf2DArray(arr, rows, cols);
    cout << "The sum of all values in the array is: " << totalSum << endl;

    return 0;
}
