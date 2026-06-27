//Delete middle element in an array
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &inputStack, int count, int size){

    //Base Case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    solve(inputStack, count+1, size);
    inputStack.push(num);

};
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int size = s.size();
    int count = 0;

    solve(s, count, size);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
