#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    vector<int> arr{2, 4, 5, 6};
    vector<int> brr{4, 5, 6, 7};
    set<int> ans;  // Use set to automatically handle duplicates

    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++) {
            if (element == brr[j]) {
                ans.insert(element);  // Insert into the set (duplicates are automatically handled)
            }
        }
    }

    // Print the result (common elements) without using auto
    for (int value : ans) {  // Explicitly specify the type 'int' instead of 'auto'
        cout << value << endl;
    }

    return 0;
}
