//Find min of linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
void Minimum(Node* head){
    int min = head -> data;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data < min){
            min = temp -> data;
        }
        temp = temp -> next;
    }
    cout << "Minimum value in the linked list is: " << min << endl;
}
int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node * third = new Node(5);

    head -> next = second;
    second -> next = third; 
    Minimum(head);
    return 0;
}
