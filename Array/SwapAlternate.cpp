//Swap alternate elemnets
#include<iostream>
using namespace std;
int SwapAlternate(int arr[],int size){
    for(int i=0;i<size ; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
           
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
     
    int size =6;
    SwapAlternate(arr, size);

    cout << "The swap of array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
