//2 stck in an array

#include<iostream>
using namespace std;
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
  public:
  //Initilize two satck
  TwoStack(int s){
    this -> size = s;
    top1 = -1;
    top2 = size;
    arr = new int(size);
  }

  //Push in stack 1;
  void push1(int num){
    //Atleast ek empty space present h
    if(top2 -top1 > 1){
        top1++;
        arr[top1] = num;
    }
  }
  //Push in stack 2;
    void push2(int num){
        //Atleast ek empty space present h
        if(top2 -top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }
    //Pop from stack 1
    int pop1(){
        if (top1 >0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;

        }
    }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};

int main(){
    TwoStack s(5);
    s.push1(10);
    s.push2(20);
    s.push2(30);
    s.push1(40);
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    return 0;
}
