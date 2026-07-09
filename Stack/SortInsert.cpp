//sorted insert in stack using recursion


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
};
int main(){
    stack<int> stack;
    stack.push(11);
    stack.push(2); 
    stack.push(32);
    stack.push(3);
    stack.push(14);

    Solution obj;
    obj.sortedInsert(stack, 4);

    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
