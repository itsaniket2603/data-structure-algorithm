#include<iostream>
using namespace std;

void Moveallneg(int *arr, int n) {
    int l = 0;
    int h = n - 1;

    while (l < h) {
        // If the element at l is negative, move it to the left
        if (arr[l] < 0) {
            l++;
        }
        // If the element at h is positive, move it to the right
        else if (arr[h] >= 0) {
            h--;
        }
        // Swap if l is positive and h is negative
        else {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }

    // Output the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-3, 8, -5, 8, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Moveallneg(arr, n);

    return 0;
}
