//Find  first repeating element in an array


#include<iostream>
using namespace std;
int Firstrep(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }

    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,4,2,5,6};
    int n=8;
    int rep = Firstrep(arr,8);
    cout<<"The first repated element is"<<rep<<endl;

}
