//Check if the array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if((n==0)||(n==1))
        return true;
    if(arr[0]>arr[1])
        return false;
    return isSorted(arr+1,n-1);

}
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6  };
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n))     
        cout<<"The array is sorted."<<endl;
    else
        cout<<"The array is not sorted."<<endl;
}
