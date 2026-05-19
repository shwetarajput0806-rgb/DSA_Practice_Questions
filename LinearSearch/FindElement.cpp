//Find the element int the given array

#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key =4;
    int linear =LinearSearch(arr,5,4);
    cout<<"the value is:"<<linear<<endl;

}
