#include<iostream>
using namespace std;
void printRowwisesum(int arr[][3], int row , int col){
    for(int i=0;i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum+arr[i][j]  ;
        }
        cout << sum << " " << endl;

    }
}


int main(){
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout << " enter array in row wise";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
   

    
    printRowwisesum(arr , row , col);

    

    return 0;
}