//intersection of two array
#include<iostream>
#include<algorithm>
using namespace std;
void interSection(int arr1[],int n,int arr2[],int m){
         int i=0;
         int j=0;
         while(i<n && j<m){
    

            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
                i++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else {
                j++;
            }
            
        }
    }

int main(){
    int arr1[8]={1,4,5,6,7,8,10,12};
    int arr2[10]={10,2,4,3,5,7,5,8,4,3};

    sort(arr1, arr1+8);   // arr1 sort
    sort(arr2, arr2+10);  // arr2 sort
   
    
    cout<<"The intersection is"<<endl;
    interSection(arr1,8,arr2,10);
    return 0;

    
}
