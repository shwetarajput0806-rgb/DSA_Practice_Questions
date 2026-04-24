//Bubble sort using recursion

#include<iostream>
using namespace std;        
void bubbleSort(int arr[],int n){
    //base case
    if(n==0 || n==1)
        return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    //recursive call
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    int size = 5;
    bubbleSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
