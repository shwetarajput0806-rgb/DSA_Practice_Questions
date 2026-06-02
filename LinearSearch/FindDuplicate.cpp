//Find duplicate#287



#include<iostream>
#include<algorithm>
using namespace std;
int Duplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<=n-1; i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}
int main(){
    int arr[]={1,3,4,2,2};
    int dup =Duplicate(arr,5);
    cout<<"The duplicate is: "<<dup<<endl;
}
