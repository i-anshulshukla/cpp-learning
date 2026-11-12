#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public :
    List(){
    head=tail=NULL;
    }
    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        } else{
            newNode->next=head;
            head = newNode;
        }
    }
    void push_back(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head = tail = newNode;
            head->next=NULL;
        }else{
            tail->next=newNode;
            tail=newNode;
            tail->next=NULL;
        }
    }

    void pop_front() {
    if (head == NULL) {
        return;
    }
    Node* temp = head;      
    head = head->next;      
    if (head == NULL) {     
        tail = NULL;
    }
    delete temp;       
}
    void pop_back() {

    if (head == NULL) {
        return;
    }


    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }


    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;        
    tail = temp;        
    tail->next = NULL;
}
 void insert(int val , int position){
    if(position<0){
        cout<<"Invalid Position";
        return;
    }
    if(position==0){
        push_front(val);
        return;
    }
    Node* temp=head;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }

    Node* newNode = new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;

 }

 int search(int val){
    Node* temp=head;
    int i=0;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"Index="<<i;
            return i;
        }
        temp=temp->next;
        i++;
    }
    return -1;
 }

    void printLL(){
        Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    }
 
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();
    ll.insert(4,2);
    ll.printLL();
    ll.search(4);
    return 0;
}