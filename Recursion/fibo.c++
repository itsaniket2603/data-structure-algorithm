#include<iostream>
using namespace std;
int fibonacii(int n){
    if(n==0 || n==1){
        return n;
        
    }
    else{
        return fibonacii(n-1)+ fibonacii(n-2);
    }
}

int main(){
    cout<< "ENTER THE NUMBER" << endl ;
    int n;

    cin >> n ;
    for(int i=0; i<n; i++){

        cout << fibonacii(i)<< endl << endl;
    }
    return 0;
}