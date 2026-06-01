//Delete a node in Circular Linked List by value

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data "
             << value << endl;
    }
};

// Insert a node after a given element
void insertNode(Node* &tail, int element, int d){

    // Empty List
    if(tail == NULL){

        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }

    else{

        // Non-empty list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
    }
}

// Print Circular Linked List
void print(Node* tail){

    if(tail == NULL){
        cout << "List is Empty" << endl;
        return;
    }

    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);

    cout << endl;
}

// Delete node by value
void deleteNode(Node* &tail, int value){

    // Empty list
    if(tail == NULL){
        cout << "List is Empty" << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != value){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    // Only one node
    if(curr == prev){
        tail = NULL;
    }

    // Deleting tail node
    else if(tail == curr){
        tail = prev;
    }

    curr->next = NULL;
    delete curr;
}

int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);

    cout << "Original List: ";
    print(tail);

    deleteNode(tail, 3);
    cout << "After deleting 3: ";
    print(tail);

    deleteNode(tail, 7);
    cout << "After deleting 7: ";
    print(tail);

    deleteNode(tail, 5);
    cout << "After deleting 5: ";
    print(tail);

    return 0;
}
