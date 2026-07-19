//Double ended queue using STL


#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Deque is empty"<<endl;
    }
    else{
        cout<<"Deque is not empty"<<endl;
    }
}
