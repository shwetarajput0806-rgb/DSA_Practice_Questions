//Tripalet sum
#include<iostream>
using namespace std;
void TriplateSum(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[12]={1,2,3,4,5,6,7,8,9,10,10,12};
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    TriplateSum(arr,12,key);
    cout<<"The sum is"<<endl;

}
