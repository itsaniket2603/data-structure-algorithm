#include<iostream>
using namespace std;
void tranpose(int arr[][3], int row , int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

}

int main(){
     int arr[3][3];
    int row = 3;
    int col = 3;
    cout << " enter array in row wise" << endl;;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    
    tranpose(arr, row, col);
    cout << " printing array";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j];
            cout << endl;
        }
    }



    return 0;
}