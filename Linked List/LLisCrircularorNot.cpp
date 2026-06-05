//Check the linkedlist is circular or not

*****************************************************************************

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;

    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);


    // Making the linked list circular
    head->next->next->next = new Node(4);
    head->next->next->next->next = head;
    if(isCircular(head)){
        cout << "The linked list is circular." << endl;
    }
    else{
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}
