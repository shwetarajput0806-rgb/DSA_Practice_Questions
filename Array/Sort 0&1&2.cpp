//sorted 0,1,2
#include<iostream>
using namespace std;
void Sort(int arr[],int n){
    int i=0;
    int j=0;
    int k=n-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;

        }
        else  {  //while(arr[j]==2)
            swap(arr[j],arr[k]);
            k--;
        }
    }
}
int main(){
    int arr[12]={0,1,2,0,1,1,2,2,0,0,2,1};
    Sort(arr,12);
    cout<<"The sorted array is : ";
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
}
