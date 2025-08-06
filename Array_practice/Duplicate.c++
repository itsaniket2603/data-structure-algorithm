#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find and print duplicate elements in the array
    void findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> freq;
    //counting no of frequency of each element
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        freq[num]++;
    }
    for (auto it : freq) {
        if (it.second > 1)
            cout << it.first << " ";
    }
    cout << endl;
}





int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 3, 5}; // Sample input
    findDuplicates(arr); // Call the function
    return 0;
}
// oid findDuplicates(const vector<int>& arr) {
//     unordered_map<int, int> freq;
//     for (int num : arr) freq[num]++;
//     for (auto it : freq) {
//         if (it.second > 1)
//             cout << it.first << " ";
//     }
//     cout << endl;
// }