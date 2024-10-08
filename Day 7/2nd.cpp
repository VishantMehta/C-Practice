#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int* arr = new int[N];
    cout << "Enter the array elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr, N);

    cout << "Sorted array: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
