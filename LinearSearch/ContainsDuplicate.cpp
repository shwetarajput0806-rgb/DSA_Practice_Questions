//Contains Duplicate
#include<iostream>
#include<algorithm>
using namespace std;
/*bool Duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
        
    }
    return false;
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int duplicate =Duplicate(arr,10);
    cout<<(duplicate ? "true":"false")<<endl;

}*/
bool Duplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,5};
    int duplicate =Duplicate(arr,10);
    cout<<(duplicate ? "true":"false")<<endl;
}    
