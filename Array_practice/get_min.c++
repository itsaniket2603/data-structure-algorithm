#include<iostream>
using namespace std;
int getmin(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]< min ){
                min  = arr[i][j];
            }
        }
    }
    return min;
}
int main(){
     int arr[3][3];
    int row = 3;
    int col = 3;
    cout << " enter array in row wise" << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    cout << getmin(arr, row , col);
   
    return 0;
}