//Factorial of a number using recursion
-------------
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0) //base case
        return 1;

    int fact = n*factorial(n-1); // recursive function
    return fact;    
}
int main(){
    int n;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
}
