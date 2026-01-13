#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List{

Node* head=NULL;
Node* tail=NULL;
public:
List(){
    head=NULL;
    tail=NULL;
    
}

void push_front(int val){

Node* newNode= new Node(val);

if(head==NULL){
    head=tail=newNode;
}else{
    newNode->next=head;
    head=newNode;

}

}

void push_back(int val){

Node* newNode= new Node(val);

if(head==NULL){
    head=tail=newNode;
}else{
    tail->next=newNode;
    tail=newNode;

}

}

void printList(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL\n";
}

};

int main(){

    List LL;
    LL.push_front(3);
     LL.push_front(2);
      LL.push_front(1);
      LL.printList();
    
       LL.push_back(4);
       LL.push_back(5);
         LL.printList();



}