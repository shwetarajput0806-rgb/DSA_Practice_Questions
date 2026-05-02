//Painter partition problems
#include<iostream>
using namespace std;
bool isPossible(int arr[], int n , int k , int mid){
    int PainterCount =1;
    int unitSum=0;
    for(int i=0;i<n;i++){
        if(unitSum +arr[i]<=mid){
            unitSum +=arr[i];
        }
        else{
            PainterCount++;
            if(PainterCount  > k ){
                return false;

            }
            unitSum =arr[i];
        }
    }
    return true;
}
int Painter(int arr[],int n ,int k){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    int e = sum;
    int ans =-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    int arr[4]={5,5,5,5};
    int k=2;
    int min =Painter(arr,4,2);
    cout<<"The min painter is : "<<min<<endl;

}
