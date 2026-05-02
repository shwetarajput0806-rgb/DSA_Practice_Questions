//pair sum
#include<iostream>
using namespace std;
void pairSum(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main(){
    int arr[12]={1,8,4,6,6,9,3,5,5,37,12,9};
    int key;
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    pairSum(arr,12,key);
   

}
