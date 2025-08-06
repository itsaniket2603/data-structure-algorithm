#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{0, 1, 0, 1, 0};
    int start = 0;                      // Initialize start
    int end = arr.size() - 1;           // Last index
    int i = 0;

    while (i <= end) {                  // Must be i <= end
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++;
        } else {
            swap(arr[i], arr[end]);
            end--;
            // Don't increment i here!
            // Because the swapped value at arr[i] needs to be checked
        }
    }

    // Print sorted array
    for (auto value : arr) {
        cout << value << " ";
    }

    return 0;
}
