//Single numbers
#include<iostream>
using namespace std;
int Single(int arr[],int n){
    /*for(int i=0;i<n-1;i++){
        bool found = false;
        for(int j=0 ;j<n;j++){
            if(i !=j && arr[i]==arr[j]){
                found = true;
                break;
            }
        }
        if(!found){
            return arr[i];
        }
     
    }
    return -1;*/

    //Second approch using XOR
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
    
}
int main(){
    int arr[]={1,1,3,3,2};
    cout<<"The Single element is "<<Single(arr,5)<<endl;
}
