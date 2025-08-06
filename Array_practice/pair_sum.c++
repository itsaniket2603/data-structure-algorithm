#include<iostream>
using namespace std;
int main(){
    int sum = 80;
    vector<int> arr{10 , 20 , 30 ,40 ,50, 70};
    for(int i=0; i<arr.size(); i++){
        //cout << "We are at element " << arr[i] << endl;
        int element = arr[i];
        for(int j=i+1; j<arr.size(); j++){
            // cout << "(" << element << "," << arr[j] << ")" << endl;
            //cout << "pair " << element << " with " << arr[j] << endl;
            if(element+arr[j]== sum ){
                cout << "Pair found at " << "(" << element << "," << arr[j] << ")"<< endl;
            }
        }
    }
    return 0;
}