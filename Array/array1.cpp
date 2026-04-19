//Find max and min of array
#include<iostream>
using namespace std;
int getmax(int arr[],int size){
    int max = 0;
    for(int i=0 ; i<size ;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int size){
    int min=arr[0];
    for(int i=0; i<size ;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    getmax(arr,10);
    cout<<"The max value is "<<getmax(arr,10)<<endl;;
    cout<<"The min value is"<<getmin(arr,10)<<endl;

}