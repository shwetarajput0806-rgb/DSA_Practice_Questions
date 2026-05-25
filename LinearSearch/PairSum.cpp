//Pair sum


-----------------------------------------

  
#include<iostream>
using namespace std;
int Pair(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =6;
    int key;
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    int pairsum = Pair(arr,6,key);
    cout<<"The pair sum is"<<pairsum<<endl;

}
