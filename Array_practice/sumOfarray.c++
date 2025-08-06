#include<iostream>
#include<vector>
using namespace std;
int sumOfArray(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum = sum +  arr[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); // declare vector of size n

    // Input elements
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    
    // Output elements
    cout << "You entered:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = sumOfArray(arr);
    cout << " sum of array " <<   sum << endl;;

    return 0;
}
