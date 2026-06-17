#include<iostream>
using namespace std;
int Bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int n=6;
    Bubble(arr,6);
    cout<<"the sorted array is"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
