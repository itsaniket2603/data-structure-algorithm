#include<iostream>
using namespace std;

// Function to find the key in the 2D array
bool findkey(int arr[][3], int row, int col, int key) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == key) {
                return true;  // If key is found, return true
            }
        }
    }
    return false;  // If key is not found after searching all elements
}

int main() {
    int arr[3][3];  // Declare a 3x3 array
    int row = 3, col = 3;  // Rows and columns for the 2D array
    
    cout << "Enter array in row-wise format:" << endl;
    // Input the 2D array
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];  // User input for array elements
        }
    }

    int key = 12;  // Define the key you are searching for
    // Call the findkey function and print the result
    if (findkey(arr, row, col, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
