#include<iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // Not enough elements

    int max1, max2;

    // Initial comparison
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    return (max1 == max2) ? -1 : max2; // If no second largest
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least 2 elements.\n";
        return 0;
    }

    int arr[100];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = secondLargest(arr, n);

    if (ans == -1)
        cout << "No second largest element found.\n";
    else
        cout << "Second largest element is: " << ans << endl;

    return 0;
}
