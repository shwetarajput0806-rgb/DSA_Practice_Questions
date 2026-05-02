//Binary search
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n, int key){
    int start=0;
    int end =n-1;
    
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
    }
     int mid = (start+end)/2;
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index = BinarySearch(arr,10,11);
    cout<<"The index of 11 is : "<<index<<endl;
}
