//Running sum of 1d array



#include<iostream>
using namespace std;
int Running(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
      
        sum +=arr[i];
        cout<<sum<<" "<<endl;
    }    
    return sum;
}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
     int run=Running(arr,4);
     cout<<"The sum is"<<run<<endl;
}
