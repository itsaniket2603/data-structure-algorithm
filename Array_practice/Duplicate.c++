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

//Sorting approach

// #include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i-1]) return nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums); // Output: 3
}
//Two pointer approach
// #include <bits/stdc++.h>
// using namespace std;       
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Step 1: Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Step 2: Find entry point (duplicate)
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums); // Output: 2
}