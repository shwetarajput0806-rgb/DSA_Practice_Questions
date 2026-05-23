//Insert at tail
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    node*next;
    Node(int data){
        this -> data= data;
        this-> next = NULL;
    }
};
void insertAttail(Node* &tail, int d){

    Node* temp = new Node(d);

    tail->next = temp;

    tail = temp;
}


int main(){
    Node* head = NULL;
    insertAttail(head, 10);
    insertAttail(head, 20);
    insertAttail(head, 30);
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
