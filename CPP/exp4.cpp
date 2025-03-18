#include <iostream>
c
using namespace std;

class Queue {
private:
    int frontIndex;
    int rearIndex;
    int capacity;
    int *arr;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;  
        rearIndex  = -1; 
    }
    
    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return (rearIndex < frontIndex);
    }

    bool isFull() {
        return (rearIndex == capacity - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }
        rearIndex++;
        arr[rearIndex] = value;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // or throw an exception
        }
        int item = arr[frontIndex];
        frontIndex++;
        return item;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty. No rear element." << endl;
            return -1;
        }
        return arr[rearIndex];
    }

    // Returns current size of the queue
    int size() {
        return (isEmpty() ? 0 : (rearIndex - frontIndex + 1));
    }
};
