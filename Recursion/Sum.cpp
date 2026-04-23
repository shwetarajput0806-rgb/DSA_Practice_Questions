//Total sum of arrya
#include<iostream>
using namespace std;
int isSum(int arr[],int n){
     if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    return arr[0]+isSum(arr+1,n-1);
  

}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The total sum of the array is "<<sum<<endl;
}
