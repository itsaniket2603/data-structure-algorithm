//palindrome for string

#include<iostream>
using namespace std;
bool isPlaindrome(string str , int s , int e){
    if(s>e) return true;
    if(str[s]!=str[e]) return false;
    return isPlaindrome(str, s+1 , e-1);


}
int main(){
    string str  ;
    cout << " enter the string " << endl;
    cin >> str;
    if(isPlaindrome(str , 0 , str.length()-1)){
        cout << str << " is a palindrome " << endl ;
    }
    else{
        cout << str << " is not a palindrome " << endl ;
    }

}
//palindrome for number