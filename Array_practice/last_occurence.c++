#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;      // store the index
            low = mid + 1;     // move right to find last occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;

    int index = lastOccurrence(arr, n, target);
    if (index != -1) {
        cout << "Last Occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << target << " not found in array." << endl;
    }

    return 0;
}

