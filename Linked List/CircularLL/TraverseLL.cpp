//Traverse the circular linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;    
    }
};
void traverse(Node * tail){
    Node * temp = tail;
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}
int main(){

    // Creating Circular Linked List: 10 -> 20 -> 30 -> back to 10

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = first;

    Node *tail = first;

    traverse(tail);

    return 0;
}
