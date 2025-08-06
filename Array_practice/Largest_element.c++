#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0]; // Start by assuming the first element is the largest
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i]; // Update if a larger element is found
            }
        }
        return largest;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {5, 12, 3, 19, 7};
    int maxElement = sol.largestElement(arr);
    cout << "Largest element is: " << maxElement << endl;
    return 0;
}
