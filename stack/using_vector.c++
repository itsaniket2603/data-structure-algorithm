#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<< " stack underflow can't delete element"<<endl;
        }
        else{
            v.pop_back();
        }
    }
    int getTop(){
        if(v.size()==0){
            cout<< " there is no element in stack"<<endl;
            return -1;
        }
        else{
            return v[v.size()-1];
        }
    }
    int getSize(){
        return v.size();
    }
    bool isEmpty(){
        return v.size()==0;
    }   


};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    s.pop();
    cout<<s.isEmpty()<<endl;
    s.pop();
    return 0;
}