//Sort a stack using recursion


#include<iostream>
#include<stack>
using namespace std;
class Solution{
    public:
void sortedInsert(stack<int> &stack, int num){
    //base case
    if(stack.empty() || ( !stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    //recursive call
    sortedInsert(stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    //recursive call
    sortStack(stack);
    //insert in sorted order
    sortedInsert(stack, num);
 }
};
int main(){
    stack<int> stack;
    stack.push(11);
    stack.push(2);
    stack.push(32);
    stack.push(3);
    stack.push(14);

    Solution obj;
    obj.sortStack(stack);

    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
