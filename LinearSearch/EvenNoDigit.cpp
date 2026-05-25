//Find number with even number of digit


#include<iostream>
using namespace std;
int EvenDigit(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        int nums = arr[i];
        int digit =0;
        while(nums>0){
            nums = nums/10;
            digit++;
        }
        if(digit %2==0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={12,111,1234,12};
     int even = EvenDigit(arr,4);
    cout<<"The even digit is: "<<EvenDigit(arr,4)<<endl;
}
