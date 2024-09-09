#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int max = arr[0];  
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[] = {-1, -3, -5, -7, -9};
//Testing:-
    cout << "Maximum in arr1: " << findMax(arr1, 5) << endl;
    cout << "Maximum in arr2: " << findMax(arr2, 5) << endl;
    cout << "Maximum in arr3: " << findMax(arr3, 5) << endl;

    return 0;
}
