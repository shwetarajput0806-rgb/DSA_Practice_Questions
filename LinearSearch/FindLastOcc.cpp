//Find last Occurence of the array


#include<iostream>
using namespace std;
int LastOcc(int arr[] ,int n,int key){
    for(int i=n-1;i<=n;i--){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,9,3,9,5,6,7,8,8,10};
    int key = 9;
    cout<<"The last occ of 9 is "<<LastOcc(arr,10,9)<<endl;

}
