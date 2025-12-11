#include <iostream>
using namespace std;

class Queue {
public:
    int capacity;
    int front;
    int rear;
    int* arr;

   
Queue(int capacity) {
        this->capacity = capacity;
arr = new int[capacity];
        front = -1; 
        rear = -1;  
    }

   
    void push(int element) {
        if (rear + 1 < capacity) { 
            if (front == -1) { 
                front = 0;     
            }
            rear++;
arr[rear] = element;
        } else {
cout<< "Queue Overflow" <<endl;
        }
    }


    void pop() {
        if (front >= 0) {
           
            if (front == rear) {
                front = rear = -1; 
            } else {
                front++;
            }
        } else {
cout<< "Queue Underflow" <<endl;
        }
    }


    int peek() {
        if (front >= 0) {
            return arr[front];
        } else {
            return -1; 
        }
    }

    
    ~Queue() {
delete[] arr;
    }
};

int main() {
    Queue q(5); 
q.push(10);
q.push(20);
q.push(30);

cout<< "Front element: " <<q.peek() <<endl; 
q.pop();
cout<< "Front element after pop: " <<q.peek() <<endl; 

    return 0;
}

/*
Front element: 10
Front element after pop: 20

*/