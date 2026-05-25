//First element that repeat first


#include<iostream>
using namespace std;

int Firstrep(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,4,2,5,6};
    int rep = Firstrep(arr,8);
    cout<<"The first repeated element is "<<rep<<endl;
}
