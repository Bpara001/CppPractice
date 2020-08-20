//
// Created by Jesse on 8/2/2020.
//

#ifndef CPPPRACTICE_MYSTACK_H
#define CPPPRACTICE_MYSTACK_H
//
// Created by Jesse on 7/29/2020.
//
#include <iostream>
#include <cstdlib>
template <typename T>
class MyStack {

private:
    int numOfStack = 3;
    int stackCapacity;
    T *stackArray;
    int *stackCapacityUsed;

    int indexOfTop(int stackNum)const ;
public:
    //Constructor; Create 3 stacks
    MyStack(int stackCapacity);
    //Destructor
    ~MyStack();

    void push(int stackNum,T value);
    bool isEmpty(int stackNum) const;
    void pop(int stackNum);
    //Return T Element from selected stack
    T peek(int stackNum);
    bool isFull(int stackNum) const;

};


#endif //CPPPRACTICE_MYSTACK_H
