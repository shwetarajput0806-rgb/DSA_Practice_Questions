#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for node with data "
            <<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    // Empty list
    if(tail == NULL){

        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }

    else{

        // Non-empty list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){

    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }

    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);

    cout<<endl;
}

int main(){

    Node* tail = NULL;

    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);

    print(tail);

    return 0;
}
