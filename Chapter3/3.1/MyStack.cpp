//
// Created by Jesse on 8/2/2020.
//
#include "MyStack.h"

using namespace std;


template <typename T>
MyStack<T>::MyStack(int stackCapacity) {

    this->stackCapacity= stackCapacity;
    stackArray=new T[numOfStack * stackCapacity](); //initialize array values to 0
    stackCapacityUsed= new T[numOfStack]();
}
template <typename T>
MyStack<T>::~MyStack() {
    delete [] stackArray;
    delete [] stackCapacityUsed;
}
template<typename T>
void MyStack<T>::push(int stackNum, T value) {
    if(isFull(stackNum)){
        cout<<"Stack "<<stackNum<<" is full.Please pick a different one.\n ";
    }
    else{
        stackCapacityUsed[stackNum]++;

        stackArray[indexOfTop(stackNum)]=value;

    }

}
template <typename T>
bool MyStack<T>::isEmpty(int Stacknum) const {
    return (stackCapacityUsed[Stacknum]==0);
}
template <typename T>
bool MyStack<T>::isFull(int stackNum)const {
    return (stackCapacityUsed[stackNum]==stackCapacity);
}

template <typename T>
void MyStack<T>::pop(int stackNum){
    if(isEmpty(stackNum)){
        cout<<"Stack Number "<<stackNum<<" is Empty";
    }
    else{
        cout<<"Element that was Removed from stack " ;
        cout<<stackNum << " ->";
        cout<< stackArray[indexOfTop(stackNum)]<<endl;
        stackArray[indexOfTop(stackNum)]=0;
        stackCapacityUsed[stackNum]--;
    }
}

template <typename T>
T MyStack<T>::peek(int stackNum) {
    if(isEmpty(stackNum)){
        cout<<"Empty Stack:" <<stackNum;
        exit(1);
    }
    else{
        return (stackArray[indexOfTop(stackNum)]);
    }
}

template <typename  T>
int MyStack<T>::indexOfTop(int stackNum) const {
    int start=(stackNum * stackCapacity);
    int cap= stackCapacityUsed[stackNum];
    return (start + cap -1);

}
/*
 * template <class T>
class MyStack {

private:
    int numOfStack = 3;
    int stackCapacity;
    T *stackArray;
    int *stackCapacityUsed;
public:
    void pop(int stackNum);
    T top(int stackNum);


};
 *
 *
 */