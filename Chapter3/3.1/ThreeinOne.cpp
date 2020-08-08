//
// Created by Jesse on 7/29/2020.
//


#include "MyStack.cpp"
#include "iostream"

using namespace std;



int main(){
    //MyStack<T> x;
    MyStack<int> sample(33) ;
    sample.push(0,11);
    sample.push(0,10);
    sample.push(1,23);
    sample.push(1,20);
    sample.push(2,8);
    sample.pop(0);
    sample.pop(1);
    cout<<"Peek value:" <<sample.peek(2);
    return 0;
}