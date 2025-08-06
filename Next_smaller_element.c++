#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextSmallerElement(vector<int>& input){
   stack<int>s;
   vector<int>ans(input.size());
   s.push(-1);
   for(int i=input.size()-1; i>=0; i--){
    int curr = input[i];
    while(s.top()>=curr){
        s.pop();
    }
    ans[i]=s.top();
    s.push(curr);
   }
   return ans;
}
int main(){
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);
  
    vector<int> result = nextSmallerElement(input);
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}

   
    
