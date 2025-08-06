#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;

        // Optional: Initialize all elements to 0
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }

        cout << "Stack of size " << size << " created successfully." << endl;
    }

    void push(int data) {
        if (size - top > 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow, can't delete element" << endl;
        } else {
            top--;
        }
    }

    int getTop() {
        if (top == -1) {
            cout << "There is no element in Stack " << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    // Destructor to free memory
    ~Stack() {
        delete[] arr;
    }


    void deleteBottom() {
    if (top == -1) {
        cout << "Stack is empty. Cannot delete bottom element." << endl;
        return;
    }

    // Shift all elements one position to the left
    for (int i = 0; i < top; ++i) {
        arr[i] = arr[i + 1];
    }

    top--;  // Reduce top after removing bottom element
}

void printStack() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements (bottom to top): ";
    for (int i = 0; i <= top; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


};



int main() {
    // CREATION
    Stack s(5);

    // INSERTION
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size of stack: " << s.getSize() << endl;
   s.deleteBottom();
   cout<<"size of stack after deleting bottom element:"<<s.getSize()<<endl;
   s.printStack();


    return 0;
}
