//Power of a number using recursion
#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans = power(a,b/2);
    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the base and exponent: ";
    cin>>a>>b;
    cout<<a<<" raised to the power "<<b<<" is "<<power(a,b)<<endl;
}
