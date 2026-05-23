//Insert at postion singly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;

    }
};
void insertAtPosition(Node* &head, int position, int data){
    Node* temp = head;
    Node* newNode = new Node(data);
    if(position == 1){
        newNode -> next = head;
        head = newNode;
        return;
    }
    for(int i=1; i<position-1; i++){
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

int main(){
    Node* head = NULL;
    insertAtPosition(head, 1, 10);
    insertAtPosition(head, 2, 20);
    insertAtPosition(head, 3, 30);
    insertAtPosition(head, 1, 15);
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
