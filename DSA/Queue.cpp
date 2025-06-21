#include<iostream>
#define MAX_SIZE 5
using namespace std;

template<typename T> class Queue{
private:
    int front,rear;
    T arr[MAX_SIZE];
public:
    Queue():front(-1),rear(-1){

    }

    bool isFull(){
        return rear==MAX_SIZE-1;
    }

    void enqueue(T data){
        if(isFull()){
            cout<<"Queue is full\n";
            return;
        }
        if(isEmpty()){
            front = 0;
        }
        rear += 1;
        arr[rear] = data;
    }

    T dequeue(){
        if(isEmpty()){
            cout <<"Queue is empty\n";
            return -1;
        }
        T front_element = arr[front];
        front += 1;
        if(isEmpty()){
            front=-1;
            rear=-1;
        }
        return front_element;
    }

    bool isEmpty(){
        if(front<0 || front>rear){
            return true;
        }
        return false;
    }

    T getFront(){
        if(!isEmpty()){
            return arr[front];
        }
        cout <<"Queue is empty\n";
        return -1000;
    }

    void PrintQueue(){
        cout<<"Queue: ";
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue<int> q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.PrintQueue();
    cout<< q1.dequeue() <<" dequeued from queue\n";
    cout<< q1.dequeue() <<" dequeued from queue\n";
    q1.PrintQueue();
    q1.enqueue(1);
    q1.enqueue(2);
    q1.PrintQueue();
    return 0;
}