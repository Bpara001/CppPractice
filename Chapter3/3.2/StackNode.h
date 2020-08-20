//
// Created by Jesse on 8/17/2020.
//

#ifndef CPPPRACTICE_STACKNODE_H
#define CPPPRACTICE_STACKNODE_H



class StackNode{
public:
    friend class MyStack;
    StackNode(int data,StackNode *next);

private:
    StackNode *min;
    StackNode *next;
    int data;
};
#endif //CPPPRACTICE_STACKNODE_H
