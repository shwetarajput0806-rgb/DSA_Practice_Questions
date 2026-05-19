//Find first occ 


#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key ){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,3,9,4,5,6,7,8,9,10};
    int key =9;
    cout<<"The first number of occ : "<<FirstOcc(arr,10,9)<<endl;

}
