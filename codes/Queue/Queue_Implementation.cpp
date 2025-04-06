#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 100;
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = 0;
    }

    void enqueue(int val) {
        if (rear == MAX) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        arr[rear++] = val;
    }

    void dequeue() {
        if (front == rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if (front == rear) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return front == rear;
    }

    void display() {
        if (front == rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i < rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    return 0;
}
