//Two sum


#include<iostream>
using namespace std;
int TwoSum( int nums[] , int n , int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<"Index : "<<i<<" , "<<j<<endl;
                return (i,j);
            }
        }
    }
    return -1;
}
int main(){
    int nums[4]={2,7,11,15};
    int two = TwoSum(nums,4,9);
    cout<<"The two sum of 9 is: "<<two<<endl;
}
