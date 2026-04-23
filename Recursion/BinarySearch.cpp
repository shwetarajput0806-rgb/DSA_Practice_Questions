//Binary search
#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int s, int e,int size,int key){
    //base case
    if(s>e)
        return false;
    int mid = s+(e-s)/2;
    if(arr[mid]==key)
        return true;
    else if(arr[mid]>key)
        return BinarySearch(arr,s,mid-1,size,key);
    else
        return BinarySearch(arr,mid+1,e,size,key);
}
   
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 1;
    bool result = BinarySearch(arr, 0, size - 1, size, key);
    if(result)
        cout << "Key found in the array." << endl;
    else
        cout << "Key not found in the array." << endl;
    return 0;

  
}
