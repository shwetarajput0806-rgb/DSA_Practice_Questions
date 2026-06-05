//Reverse the LL in group of k


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }

};  
Node* kreverse(Node* head,int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    //recurse call for the next part
    if(next!=NULL){
        head->next=kreverse(next,k);
    }
    return prev;

}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = kreverse(head, 2);

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}
