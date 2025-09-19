#include<iostream>
#include <vector>
using namespace std;
int gcd(int a , int b){
    if(b==0) return a;
    else return gcd(b , a%b);

}
int main(){
    int a , b ,c;
    cout<< "Enter three  Number" << endl ;
    cin >> a >> b >> c;
    cout << "GCD of " << a << " , " << b << " , "  << c << " is " << gcd(gcd(a,b),c) << endl ;

    return 0 ;
}