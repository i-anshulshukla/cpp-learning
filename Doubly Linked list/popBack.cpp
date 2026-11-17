#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:

DoublyList(){
    head=tail=NULL;
}
void pushFront(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void pushBack(int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}
void popFront(){
    if(head==NULL){
        cout<<"IsEmpty";
        return;
    }
    Node* temp=head;
    head=head->next;
    if(head!=NULL){
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
}
void popBack(){
    if(head==NULL){
        cout<<"IsEmpty";
        return;
    }
    Node* temp=tail;
    if(head==tail){
        head=tail=NULL;
    }else{
        tail=tail->prev;
        tail->next=NULL;
    }
    temp->prev=NULL;
    delete temp;
}
void print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
};


int main (){
    DoublyList dll;
    dll.pushBack(1);
    dll.pushFront(2);
    dll.pushBack(3);
    dll.pushFront(4);
    dll.print();
    dll.popFront();
    dll.print();
    dll.popBack();
    dll.print();
    return 0;
}