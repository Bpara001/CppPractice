//
//


#include "iostream"
#include "stack.h"
#include "StackNode.h"
#include "stack.cpp"
#include "StackNode.cpp"

int main(){

    MyStack  *s = new MyStack() ;
    bool x= s->isEmpty();
    if(x){
        std::cout<<"true\n";
    }
    else{
        std::cout<<"false\n";
    }
    s->push(3);
    s->push(5);
    s->push(1);
    s->push(5);
    s->push(2);
    s->push(4);
    s->push(5);
    s->pop();
    s->pop();
    s->pop();
    std::cout<<"Current Min value: "<<s->getMin()<<std::endl;


    std::cin.get();
    return 0;
}


