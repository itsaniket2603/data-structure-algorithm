#include <iostream>
using namespace std;

void merge(int* arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;  // corrected (was s - mid + 1)
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    // Copy left part
    for (int i = 0; i < len1; i++) {
        left[i] = arr[s + i];
    }

    // Copy right part
    for (int i = 0; i < len2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    // Merge the two arrays
    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements
    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // Free memory
    delete[] left;
    delete[] right;
}

void mergeSort(int* arr, int s, int e) {
    if (s >= e) return;

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[] = {2, 1, 6, 4, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
