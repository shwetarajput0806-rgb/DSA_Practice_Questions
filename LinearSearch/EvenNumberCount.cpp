//Even numbers count


#include<iostream>
using namespace std;
int EvenNumber(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;

        }
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,11};
    cout<<"the even number count is: "<<EvenNumber(arr,10)<<endl;
}
