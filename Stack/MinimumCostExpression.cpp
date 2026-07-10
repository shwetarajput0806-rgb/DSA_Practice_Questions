//Minimum cost to make expression valid

#include<iostream>
#include<stack>
using namespace std;
class solution{
    public:
    int findMinimumCost(string str){
        //odd condition
        if(str.length() % 2 != 0){
            return -1;
        }
        stack <char> s;
        for(int i=0; i< str.length();i++){
            char ch = str[i];

            if(ch == '{')
                s.push(ch);
            else{
                 //ch is closed brace
                 if(!s. empty() && s.top() == '{'){
                    s.pop();
                 }
                 else{
                    s.push(ch);
                 }
            }
            

        }
        //stack contains invalid expression
            int a=0 , b=0;
            while(!s.empty()){
                if(s.top() == '{'){
                    b++;
                }
                else{
                    a++;
                }
                s.pop();
            }
            int ans = (a+1)/2 + (b+1)/2;
            return ans;

    }
};
int main(){
    string str = "{}{}{";
    solution obj;
    int ans = obj.findMinimumCost(str);
    if(ans == -1){
        cout<<"Invalid expression"<<endl;
    }
    else{
        cout<<"Minimum cost to make expression valid is: "<<ans<<endl;
    }
    return 0;
}
