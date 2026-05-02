//Sorted roated array
#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int start=0;
    int end= n-1;
    int mid =(start+end)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end =mid;
        }
        mid = (start+end)/2;
    }
    return start;
}
int binarySearch(int arr[] ,int s,int e,int key){
    int start=s;
    int end=e;
    int mid =(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start =mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;
    
}
int findPosition(int arr[] ,int n ,int key){
    int  pivot = getpivot(arr, n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot , n-1 ,key);
    }
    else{
        return binarySearch(arr,0,pivot-1 ,key);
    }
}
int main(){
    int arr[] = {7,9,1,2,3,4};
    int n=6;
    int key =2;
    cout<<"The index of key is :"<< findPosition(arr,6,2)<<endl;
}
