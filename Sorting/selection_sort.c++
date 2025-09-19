#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> arr{6,8,2,5};
   int i;
   int minIndex = i;
   int n = arr.size();
   for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[i], arr[minIndex]);
   }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
//time complexity O(n^2)
//space complexity O(1)