#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int n, int m) {
    vector<vector<int>> rotated(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }
    
    cout << "Rotated Matrix:\n";
    for (const auto& row : rotated) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    vector<vector<int>> image(n, vector<int>(m));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> image[i][j];
        }
    }

    rotateMatrix(image, n, m);
    return 0;
}
