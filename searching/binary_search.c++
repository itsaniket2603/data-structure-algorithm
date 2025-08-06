#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int size , int target){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while(start<=end){
        int element = arr[mid ];
        if(element == target){
            return mid;
        }
        else if(target < element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = (start+ end)/2;
    }
    return -1;
}
int main(){
    int arr[] = { 2 , 4 ,6 , 8 ,12 , 14};
    int size = 7;
    int target = 12;
    int result = BinarySearch(arr , size , target);
    if(result== -1){
        cout << " Target not found" << endl;
    }
    else{
        cout << "target found at " <<  result  << endl; 
    }
    return 0;
}//time complexity = o(logn);