//Sort 0 and 1
#include<iostream>
using namespace std;
void Sort(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        while(arr[left]=1 && arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int arr[10]={1,0,0,1,1,0,1,0,1,0};
     Sort(arr,10);
    cout<<"The sorted array is";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
}
