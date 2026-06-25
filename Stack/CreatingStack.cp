//Creating and all other operation in stack using STL.
//Time complexity : 
//Push opeartion : O(1)
//Pop opeartion : O(1)
//Empty : O(1)

#include <iostream>
#include <stack>
using namespace std;
int main(){
    //creation of stack
    stack<int>s;

    //Push operation
    s.push(1);
    s.push(2);

    //Pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is : "<<s.size()<<endl;
    return 0;
}
