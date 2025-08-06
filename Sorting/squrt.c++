#include<iostream>
using namespace std;
int findsqurt(int n){
    int s =0 ;
    int e = n;
    int mid = s+ (e-s)/2;
    int ans = -1;
    int target = n;
    while(s<=e){
        if(mid*mid == target){
            return target;


        }
        if( mid*mid > target){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int main(){
    int n ;
    cout << "enter the number " << endl;
    cin >> n;
    int ans  = findsqurt( n);
    cout << " Ans is " << ans;
}
