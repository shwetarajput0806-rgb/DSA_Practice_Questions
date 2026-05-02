//Sqroot -> return only interger value ont a decimal value
#include<iostream>
using namespace std;
int Square(int arr[],int n,int num){
    int start=0;
    int end =n-1;
    int mid =(start+end)/2;
    int ans =-1;
    while(start <=end){
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid<num){
            ans =mid;
            start = mid +1;
        }
        else if(mid*mid >num){
            ans =mid;
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,39};
    int sq= Square(arr,10,49);
    cout<<"The square root is the"<<sq<<endl;
}
