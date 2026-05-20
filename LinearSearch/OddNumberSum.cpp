//Find the odd number sum



#include<iostream>
using namespace std;
int oddNumber(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            sum +=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The sum is : "<<oddNumber(arr,10)<<endl;
}
