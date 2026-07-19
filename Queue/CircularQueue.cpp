//circular queue implementation


#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueue
    void enqueue(int value) {
        // Queue Full
        if ((front == 0 && rear == size - 1) ||
            (rear == (front - 1) % (size - 1))) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value;
    }

    // Dequeue
    int dequeue() {
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }

        return ans;
    }

    // Front Element
    int getFront() {
        if (front == -1)
            return -1;
        return arr[front];
    }

    // Display Queue
    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue: ";

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
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    cout << "Deleted: " << q.dequeue() << endl;
    cout << "Deleted: " << q.dequeue() << endl;

    q.display();

    q.enqueue(50);
    q.enqueue(60);

    q.display();

    cout << "Front Element: " << q.getFront() << endl;

    return 0;
}
