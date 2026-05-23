//Insert at head



#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void insertAthead(Node* &head, int data){
    Node*temp = new Node(data);
    temp -> next = head;
    head = temp;


}
int main(){
    Node* head = NULL;
    insertAthead(head, 10);
    insertAthead(head, 20);
    insertAthead(head, 30);
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;   
}
