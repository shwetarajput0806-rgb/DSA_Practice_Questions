//linear search
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size, int key){
    
    for(int i=0 ;i<size ;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
   
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"enter the key ";
    cin>>key;
    
    
    int found = LinearSearch(arr, 10, key);

    if(found == 1){
        cout << "The key is present";
    }
    else{
        cout << "The key is not present";
    }

    return 0;
}
    
    

