#include <iostream>
using namespace std;

class Deque {
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void pushFront(int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front--;
        }

        arr[front] = x;
    }

    // Insert at Rear
    void pushRear(int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = x;
    }

    // Delete from Front
    void popFront() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Deleted from Front: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    // Delete from Rear
    void popRear() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Deleted from Rear: " << arr[rear] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = size - 1;
        }
        else {
            rear--;
        }
    }

    // Get Front Element
    int getFront() {
        if (front == -1) {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Get Rear Element
    int getRear() {
        if (front == -1) {
            cout << "Deque is Empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Check Empty
    bool isEmpty() {
        return (front == -1);
    }

    // Display Deque
    void display() {
        if (front == -1) {
            cout << "Deque is Empty" << endl;
            return;
        }

        cout << "Deque: ";

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushFront(2);

    dq.display();

    dq.popFront();
    dq.display();

    dq.popRear();
    dq.display();

    cout << "Front Element: " << dq.getFront() << endl;
    cout << "Rear Element: " << dq.getRear() << endl;

    return 0;
}
