#include <bits/stdc++.h>
using namespace std;

void OrderofNsquare(int n, int arr[], int target) {
    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

void OrderofNlogN(int n, int arr[], int target) {
    sort(arr, arr + n);
    int left = 0, right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            found = true;
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int comp;
    cout << "What complexity do you want?" << endl;
    cout << "1. O(n^2)\n2. O(n log n)" << endl;
    cout << "Answer with option number: ";
    cin >> comp;

    if (comp == 1) {
        OrderofNsquare(n, arr, target);
    } else if (comp == 2) {
        OrderofNlogN(n, arr, target);
    } else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}
