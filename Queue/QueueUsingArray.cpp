//Implementation of queue using array

#include<iostream>
#include<queue>
using namespace std;

class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
public:
     Queue(){
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;

     }
       bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
     }
     void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
     }
     int dequeue(){
        if(qfront == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
     }

     int front(){
        if(qfront == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[qfront];
        }
     }
 
};
int main(){
    Queue q;
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Dequeue element is: "<<q.dequeue()<<endl;
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Dequeue element is: "<<q.dequeue()<<endl;
    cout<<"Dequeue element is: "<<q.dequeue()<<endl;
    cout<<"Dequeue element is: "<<q.dequeue()<<endl;

}
