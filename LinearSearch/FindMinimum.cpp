//Find min element in an array


#include<iostream>
using namespace std;
int Mini(int arr[],int n){
    int min =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[10]={10,11,2,3,4,5,6,7,8,9};
    cout<<"The min element is : "<<Mini(arr,10)<<endl;
}
