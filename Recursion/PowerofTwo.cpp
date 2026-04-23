//Power of two using Recursion
#include<iostream>
using namespace std;
int power(int n){
    if(n==0)
        return 1;
    int small = power(n-1);
    int bigger = 2*small;
    return bigger;
}
int main(){
    int n;
    cout<<"Enter a number to find its power of 2: ";
    cin>>n;
    cout<<"The power of 2 of "<<n<<" is "<<power(n)<<endl;
}
