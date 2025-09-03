#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {  // constructor for node
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;  // pointer to top of stack

public:
    Stack() { top = NULL; } // constructor → empty stack

    // Push element on top
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    // Pop element from top
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow (Empty Stack)" << endl;
            return;
        }
        Node* temp = top;
        cout << "Popped: " << temp->data << endl;
        top = top->next;
        delete temp;
    }

    // Peek top element
    void peek() {
        if (top == NULL) cout << "Stack is Empty" << endl;
        else cout << "Top Element: " << top->data << endl;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();  // Top Element: 30
    s.pop();   // Popped: 30
    s.peek();  // Top Element: 20
    s.pop();   // Popped: 20
    s.pop();   // Popped: 10
    s.pop();   // Stack Underflow
}
