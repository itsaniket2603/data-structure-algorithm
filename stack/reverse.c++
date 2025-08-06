#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int>& st, int val) {
    if (st.empty()) {
        st.push(val);
        return;
    }

    int top = st.top();
    st.pop();
    insertAtBottom(st, val);
    st.push(top);
}

// Function to reverse the stack using recursion
void reverseStack(stack<int>& st) {
    if (st.empty()) return;

    int top = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, top);
}

// Utility function to print the stack
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Original Stack: ";
    printStack(st);

    reverseStack(st);

    cout << "Reversed Stack: ";
    printStack(st);

    return 0;
}
