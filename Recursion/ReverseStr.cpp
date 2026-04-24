//Reverse string using recursion
#include<iostream>
using namespace std;
void reverseStr(string& str,int i,int j){
    //base case
    if(i>j)
        return;
    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call
    reverseStr(str,i,j);
}
int main(){
    string name = "shweta";
    reverseStr(name,0,name.length()-1);
    cout<<name<<endl;
}
