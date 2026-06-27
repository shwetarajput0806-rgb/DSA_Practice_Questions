//Valid parenthesis

#include<iostream>
#include<stack>
using namespace std;

bool is_valid_parenthesis(string expression){
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];

        //if opening bracket, push in stack
        //if closing bracket, check top and pop
        
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            //closing bracket
            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return s.empty();


};
int main(){
    string expression = "({[]})";
    if(is_valid_parenthesis(expression)){
        cout<<"Valid expression"<<endl;
    }
    else{
        cout<<"Invalid expression"<<endl;
    }
    return 0;
}
