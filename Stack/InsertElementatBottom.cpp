//insert an elemnet at its bottom in a given stack
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& s , int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;;
    }

    int num = s.top();
    s.pop();

    //Recursive call
    solve(s,x);
    s.push(num);
};
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int x = 0;
    solve(s,x);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
