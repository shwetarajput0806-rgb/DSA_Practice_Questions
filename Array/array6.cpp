//Find duplicate in an array //code studio
#include<iostream>
using namespace std;
int Duplicate(int arr[] ,int size){
    int ans =0;
    for(int i=0;i<size ;i++){
        ans = ans^arr[i];
    }
    return ans;

}
int main(){
    int arr[13]={1,2,1,2,3,4,3,4,5,5,6,7,7};
    int unique =Duplicate(arr,13);
    cout<<"The unique element is : "<<unique<<endl;
    
}