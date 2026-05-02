//Aggressive cows problems
#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[],int n, int k, int mid){
    int cowCount =1;
    int lastpos =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] - lastpos >= mid){
            cowCount++;
            lastpos =arr[i];
            if(cowCount == k){
                return true;
            }
        }
    }
    return false;
}
int Aggressive(int arr[],int n ,int k){
    sort(arr,arr+n);
    int s=0;
    int sum=0;
    
    int e = arr[n-1] -arr[0];
    int ans =0;
    int mid = (s+e)/2;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            s =mid+1;
        }
        else{
            e=mid-1;
        }
        mid =(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[5] = {4,2,1,3,6};
   
    int k =2;
    cout<<"Max diatance :" <<Aggressive(arr,5,2)<<endl;

}
