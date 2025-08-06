#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{9,10,4,6,3,12};
    int n = arr.size();
    for(int i=1; i<n-1; i++){
       int val = arr[i];
       int j;
       for(int j=i-1; j>=0; j--){
        if(arr[j]>val){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
       }
    arr[j+1]=val;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    
}