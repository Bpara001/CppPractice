#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unordered_map>

using namespace std;

struct Node{
    int data=0;
    Node * next= nullptr;
};

void insert(Node * &head,int data)
{
    Node *tempNode=new Node;
    tempNode->data=data;
    tempNode->next=head;
    head=tempNode;
}
void print(Node *head){
    while(head){
        cout<<head->data<<"-> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void RemoveDuplicate(Node *head)
{

    if(head== nullptr || head->next== nullptr)
    {
        return;
    }
    Node *prev=head;
    Node *curr=head->next;
    unordered_map<int,int>node_hash;
    //adding to unordered map
    //Method 1
    //node_hash[head->data]=1;
    //Method 2
    node_hash.insert(make_pair(head->data,1));
    while(curr!= nullptr){
        while(curr && node_hash.find(curr->data) != node_hash.end() ){
            curr = curr->next;
        }
        prev->next=curr;
        prev=curr;
        if(curr){
            node_hash[curr->data]=1;
            curr=curr->next;
        }
    }
}// https://github.com/careercup/CtCI-6th-Edition-cpp/blob/a68ba3e1c630a4d218ff1294f3eaf5aeced449ec/chapter-2-Linked-Lists/2-1-remove-dups.cpp
int main(){

    cout<<"Linked List:Unsorted Duplicates"<<endl;
    Node * head= nullptr;
    srand(time(NULL));
    int size=rand()%20 +2;

    for(unsigned i =0; i<size;i++){
        insert(head,rand()%5+1);
    }
    cout<<"Printing Original"<<endl;
    print(head);
    cout<<endl;
    cout<<"Printing Results"<<endl;
    RemoveDuplicate(head);
    print(head);


    return 0;
}