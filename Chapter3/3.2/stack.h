//
// Created by Jesse on 8/17/2020.
//

#ifndef CPPPRACTICE_STACK_H
#define CPPPRACTICE_STACK_H

#include "StackNode.h"
#include "iostream"
#include "cstdlib"

class MyStack{

private:
    StackNode * head;
    int stackSize;

public:
    MyStack();
    virtual ~MyStack();
    void push(int data);
    void pop();
    int top() const;
    int getMin() const;
    bool isEmpty() const;
    int getSize() const;


};




#endif //CPPPRACTICE_STACK_H
