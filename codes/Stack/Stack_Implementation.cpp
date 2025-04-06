#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 100;  // Maximum size
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(10);
    s.push(15);
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
