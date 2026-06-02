//Find the highest altitude


#include<iostream>
using namespace std;
int altitude(int arr[],int n){
    int max =0;
    int current=0;
    for(int i=0;i<n;i++){
        current += arr[i];
        if(current > max){
            max = current;
        }
    }
    return max;
}
int main(){
    int arr[]={-5,1,5,0,-7};
    cout<<"the max is"<<altitude(arr,5);
}
