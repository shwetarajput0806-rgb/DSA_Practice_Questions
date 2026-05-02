//Find the first and last occurence of the element
#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans =-1;
    while(start<=end){
        int mid = (start +end)/2;
        if(arr[mid]==key){
            ans =mid;
            end = mid -1;
        }
        else if(key<arr[mid]){
            end =mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        mid =(start+end)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n , int key){
    int start=0;
    int end = n-1;
    int ans =-1;
    while(start<=end){
        int mid =(start+end)/2;
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
         mid =(start+end)/2;
    }
    return ans;
}
int main(){
    int arr[10]={1,2,2,3,3,3,4,5,6,7};
    int index = FirstOcc(arr,10,2);
    cout<<"The first occurence of 3 is :"<<index<<endl;
    int last =lastOcc(arr,10,2);
    cout<<"The last occurence of 3 is: "<<last<<endl;
}
