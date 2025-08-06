#include <iostream>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q) {
    // Base case
    if (q.empty()) return;

    // Step 1: Remove front element
    int front = q.front();
    q.pop();

    // Step 2: Reverse the remaining queue
    reverseQueue(q);

    // Step 3: Add the front element to the back
    q.push(front);
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Original queue: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    reverseQueue(q);

    cout << "\nReversed queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
