//Count occureence of the number



#include<iostream>
using namespace std;
int Occurence(int arr[],int n, int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[10]={1,1,3,4,5,7,7,7,8,9};
     int key=1;
    cout<<"the occ of 1 is"<<Occurence(arr,10,1)<<endl;
}
