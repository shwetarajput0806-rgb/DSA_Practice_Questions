//Find unique element in an array


#include<iostream>
using namespace std;

void Unique(int arr[], int n){
    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,3,2,1};

    cout << "Unique elements are: ";
    Unique(arr,10);
}
