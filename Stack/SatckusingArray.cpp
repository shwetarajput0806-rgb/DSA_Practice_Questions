//Implementing stack using array


#include<iostream>
using namespace std;
class stack{
    //Properties
    public:
    int *arr;
    int top;
    int size;

    //behaviors
    stack(int size){
        this -> size = size;
        arr = new int(size);
        top=-1;

    }
    void push(int element){
        //check sspace is avilable or not
        if(size-top >1){
        top++;
        arr[top] = element;
        }
        else{
            cout<<"Satck overflow"<<endl;
        }


    }
    void pop(){
        //>0 m element hoga to hi pop karenge
        if(top >=0){
            top--;
        }
        else{
            cout<<"Satck underflow"<<endl;
        }

    }
    int peak(){
        // element hoga to hi peak karenge
        if(top>=0 ){
            return arr[top];


        }
        else{
            cout<<"Stack is empty"<<endl;
        }

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }

};
int main(){
    stack st(5);
    st.push(22);
    st.push(23);
    st.push(44);
    cout<<"Top element is : "<<st.peak()<<endl;
    st.pop();
    //st.pop();
    st.pop();

    cout<<"Top element is : "<<st.peak()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

}
