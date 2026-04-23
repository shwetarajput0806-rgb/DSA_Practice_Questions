//Linear search using recursion
#include<iostream>
using namespace std; 
int LinearSearch(int arr[],int n,int key){
        if(n==0)
            return -1;
        if(arr[0]==key)
            return 0;
        int ans = LinearSearch(arr+1,n-1,key);
        if(ans==-1)
            return -1;
        else
            return ans+1;
    
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int ans = LinearSearch(arr,n,key);
    if(ans==-1)
        cout<<"Key not found in the array."<<endl;
    else
        cout<<"Key found at index "<<ans<<endl;

}   
