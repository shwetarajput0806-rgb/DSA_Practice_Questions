
//Search element in a linked list
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// Search Element
bool searchElement(Node* head, int key){

    Node* temp = head;

    while(temp != NULL){

        // element found
        if(temp->data == key){
            return true;
        }

        temp = temp->next;
    }

    // element not found
    return false;
}

int main(){

    // Creating Linked List
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int key = 30;

    if(searchElement(head, key)){
        cout << "Element Found";
    }
    else{
        cout << "Element Not Found";
    }

    return 0;
}
