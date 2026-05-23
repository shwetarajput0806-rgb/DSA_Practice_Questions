//Sum of elements in a linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int Sum(Node *head){
    int sum =0;
    Node *temp = head;
    while(temp !=NULL){
        sum += temp -> data;
        temp = temp -> next;
    }
    return sum;  
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head -> next = second;
    second -> next = third;
    cout<<"Sum of elements in the linked list is: "<<Sum(head)<<endl;
    return 0;
}
