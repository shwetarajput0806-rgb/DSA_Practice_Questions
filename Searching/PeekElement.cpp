//Peek elements
#include<iostream>
using namespace std;
int peek(int arr[],int n){
    int start=0;
    int end =n-1;
    while(start<end){
        int mid =(start+end)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end =mid;
        }
    }
    return start ;
}
int main()
{
    int arr[4]={0,10,5,2};
    int peekvalue=peek(arr,4);
    cout<<"The peek element is : "<<peekvalue;
}
