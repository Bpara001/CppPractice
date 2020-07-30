//
// Created by Jesse on 7/28/2020.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unordered_map>
#include <stack>
#include <string>
#include <math.h>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int d)
    :data{d},next{nullptr}{}
};
void insert( Node * & head, int data ) {
    Node * newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
int collectVal(Node *head){
    int temp=0;
    for(unsigned i=1;head != nullptr;i=i*10){
        temp+=i*head->data;
        head=head->next;
    }
    return temp;
}
void print(Node *head){
    while(head){
        cout<<head->data<<"-> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}// https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c
Node *ListSum(Node *List1,Node *List2){
    Node *tempNode= nullptr;
    int number1,number2,sum,rounds,temp;
    number1=collectVal(List1);
    number2=collectVal(List2);
    sum=number1+number2;
    cout<<"Sum Value to enter in reverse order in Linked List:"<<sum<<endl;
    rounds=GetNumberOfDigits(sum);
    int x=0;
    for(int i=rounds,j=10; i!=0;i--,j=j*pow(10,i)){

        temp= (sum % (int)(pow(10,i)) )/pow(10,i-1);
        insert(tempNode,temp);
    }
    return tempNode;
}
int main(){
    Node *Result=nullptr;
    //Making List 1
    Node * list1 = nullptr;
    insert(list1, 6);
    insert(list1, 1);
    insert(list1, 7);
    std::cout << "List1:  ";
    print(list1);

    //Making List 2
    Node * list2 = nullptr;
    insert(list2, 2);
    insert(list2, 9);
    insert(list2, 5);
    std::cout << "List2:  ";
    print(list2);


    //Printing Sum
    Result=ListSum(list1,list2);
    print(Result);

    return 0;
}


// Recursion
/*Node * add_followup_helper( Node * list1, Node * list2, int & carry ) {
  if ( list1 == nullptr && list2 == nullptr && carry == 0 ) {
    return nullptr;
  }

  Node * result = add_followup_helper(list1 ? (list1->next) : nullptr,
                                      list2 ? (list2->next) : nullptr,
                                      carry);

  int value = carry + (list1 ? list1->data : 0 ) + (list2 ? list2->data : 0);
  insert( result, value % 10 );
  carry = ( value > 9 ) ? 1 : 0;
  return result;
}
 *
 *
 *https://github.com/careercup/CtCI-6th-Edition-cpp/blob/a68ba3e1c630a4d218ff1294f3eaf5aeced449ec/chapter-2-Linked-Lists/2-5-add-lists.cpp
 */