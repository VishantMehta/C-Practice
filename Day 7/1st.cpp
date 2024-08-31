#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(arr, N);

    cout << "Sorted array: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
