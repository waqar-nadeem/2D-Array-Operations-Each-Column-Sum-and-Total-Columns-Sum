#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "\nEnter " << rows * cols << " elements for the 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    vector<int> columnSums(cols, 0);
    int totalColumnSum = 0;

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            columnSums[j] += arr[i][j];
        }
        totalColumnSum += columnSums[j];
    }

    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; ++j) {
        cout << "Column " << j + 1 << ": " << columnSums[j] << endl;
    }

    cout << "\nTotal column sum: " << totalColumnSum << endl;

    return 0;
}
