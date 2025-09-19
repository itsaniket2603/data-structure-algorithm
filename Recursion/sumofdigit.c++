#include<iostream>
using namespace std;
int SumOfDigits(int n){
    if(n==0) return 0;
    return (n%10) + SumOfDigits(n/10);
}
int main(){
    int n; 
    cout << "Enter the number" << endl ;
    cin >> n ;
    cout << "Sum of digits of " << n << " is " << SumOfDigits(n) << endl ;
    return 0;
}