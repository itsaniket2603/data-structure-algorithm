#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert node at head (outside class)
void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    insertAtHead(head, 20);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    insertAtHead(head, 90);

    printList(head);

    return 0;
}
