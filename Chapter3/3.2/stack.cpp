//
// Created by Jesse on 8/18/2020.
//
#include "stack.h"


MyStack::MyStack()
    :head(nullptr), stackSize(0)
{}
MyStack::~MyStack() {
    StackNode *temp=head;
    while(head!= nullptr){
        head=head->next;
        delete temp;
        temp=head;
    }
}
bool MyStack::isEmpty() const
{
    return (stackSize==0 || head== nullptr );
}
int MyStack::getSize() const
{
    return stackSize;
}

int MyStack::getMin() const
{
    if (stackSize == 0 || head == nullptr) {
        std::cout<<"Error empty stack"<<std::endl;
        exit(1);
    } else {
        return (head->min->data);
    }
}

int MyStack::top() const
{
    if(stackSize ==0 || head== nullptr){
        std::cout<<"Stack is Empty cannot use Top"<<std::endl;
        exit(1);
    }
    return (head->data);
}

void MyStack::pop() {
    if(stackSize==0 || head== nullptr){
        std::cout<<"Cant Pop(): Stack is Empty"<<std::endl;
    }
    StackNode *temp =head;
    head=head->next;
    delete temp;
    stackSize--;
}

void MyStack::push(int data)
{
    if(stackSize==0 || head== nullptr){
        head= new StackNode(data, nullptr);
        head->min=head;
    }
    else if(data <= head->min->data){
        head= new StackNode(data,head);
        head->min=head;
    }
    else{
        head=new StackNode(data,head);
        head->min=head->next->min;
    }
    stackSize++;
}
/*
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
 */