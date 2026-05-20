//Reverse search



#include<iostream>
using namespace std;
int Reverse(int arr[],int n,int key){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==key){
            return i;
            
        }
    }
    return -1;
}
int main(){
    int arr[]={1,7,3,4,5,6,7,8};
    int key;
    cout<<"enter the value of key"<<endl;
    cin>>key;
    int rev =Reverse(arr,8,key);
    cout<<"The reverse value is : "<<rev<<endl;
}
