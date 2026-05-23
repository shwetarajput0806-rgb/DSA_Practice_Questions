//Delete the node in the LL -> singly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this -> data= d;
        this -> next = NULL;

    }
};
void deleteNode(Node* &head , int position){
    if(position ==1){
        Node* temp = head;
        head = head-> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
    cout<<"Node deleted at position: "<<position<<endl;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head -> next = second;
    second -> next = third;
    deleteNode(head, 3);
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
    return 0;
   

}
