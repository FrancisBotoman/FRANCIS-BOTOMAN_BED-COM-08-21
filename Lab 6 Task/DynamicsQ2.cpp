#include <iostream>
using namespace std;

int main() {
    // Declare variable dimensions
    int rows, cols;

    // Prompt user to enter dimensions
    cout << "Enter number of rows (max 3): ";
    cin >> rows;

    // Check if rows exceed maximum
    if (rows > 3 || rows <= 0) {
        cout << "Number of rows must be between 1 and 3. Exiting program." << endl;
        return 1; 
    }

    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    // Check if columns exceed maximum
    if (cols > 3 || cols <= 0) {
        cout << "Number of columns must be between 1 and 3. Exiting program." << endl;
        return 1; 
    }

    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }

    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

      return 0;
    }

  