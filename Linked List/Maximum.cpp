//Find the maximum value in the ll
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void Maximum(Node * head){
    Node * temp = head;
    int max = head -> data;
   
    while(temp != NULL){
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp-> next;
    }
    cout << "Maximum value in the linked list is: " << max << endl;
}
int main(){
    Node *head = new Node(10);
    Node *Second = new Node(20);
    Node *Third = new Node(50);
    head -> next = Second;
    Second -> next = Third;
   
    Maximum(head);
    return 0;

}
