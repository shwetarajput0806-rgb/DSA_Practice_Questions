//Find max element in the array


#include<iostream>
using namespace std;
int Maxi(int arr[],int n){
    int max=0;
    for(int i=0 ;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    return max;
    
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,1};
    cout<<"the max value is : "<<Maxi(arr,8)<<endl;

}
