//Reverse the stack using recursion


#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int num){
    //base case
    if(stack.empty()){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    //recursive call
    insertAtBottom(stack, num);
    stack.push(n);
}

void reverseStack(stack<int> &stack){
    //base case
     if(stack.empty()){
        return;
     }
     int num = stack.top();
     stack.pop();

     //Recursive call
     reverseStack(stack);
     //insert at bottom
     insertAtBottom(stack, num);
}

int main(){
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    reverseStack(stack);

    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
