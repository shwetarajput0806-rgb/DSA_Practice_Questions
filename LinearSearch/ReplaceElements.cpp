//Replace element in an array


#include<iostream>
using namespace std;
void Replace(int arr[] ,int n ,int key ,int newval){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            arr[i]=newval;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    Replace(arr,9,7,6);
    cout<<"Array after replace";
    for(int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
