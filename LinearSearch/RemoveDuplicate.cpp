//Remove duplicate form sorted array letcode 26 q


#include<iostream>
using namespace std;

    
int Duplicate(int arr[], int n){
    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
   }


int main(){
    int arr[] = {0,0,1,1,2,2,3,4,5};
    int k = Duplicate(arr, 9);

    cout << "Unique count: " << k << endl;

    cout << "Array: ";
    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
}
