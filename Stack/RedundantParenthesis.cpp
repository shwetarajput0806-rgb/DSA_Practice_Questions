//Redundant parenthesis in an expression


#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool findRedundant(string &s) {

        stack<char> st;

        for(int i = 0; i < s.length(); i++) {

            char ch = s[i];

            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                st.push(ch);
            }
            else {

                if(ch == ')') {

                    bool isRedundant = true;

                    while(st.top() != '(') {

                        char top = st.top();

                        if(top == '+' || top == '-' || top == '*' || top == '/') {
                            isRedundant = false;
                        }

                        st.pop();
                    }

                    // Remove opening bracket
                    st.pop();

                    if(isRedundant) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

int main() {

    string s = "(a+b)+(c+d)";

    Solution obj;

    if(obj.findRedundant(s))
        cout << "Redundant brackets found";
    else
        cout << "No redundant brackets found";

    return 0;
}
