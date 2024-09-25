#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    vector<vector<int>> array(n, vector<int>(m));

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> array[i][j];
        }
    }

    vector<int> flatArray;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flatArray.push_back(array[i][j]);
        }
    }

    sort(flatArray.begin(), flatArray.end());

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            array[i][j] = flatArray[i * m + j];
        }
    }
    cout << "Sorted 2D Array:\n";
    for (const auto& row : array) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
