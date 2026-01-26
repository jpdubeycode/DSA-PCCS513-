
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
 
    public:
    Node* head=NULL;
    Node* tail=NULL;
    
    List(){
        head=NULL;
        tail=NULL;

    }

    void push_front(int val){
     
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
  
    void push_back(int val){
     Node* newNode=new Node(val);
     if(head==NULL){
        head=tail=newNode;
     }
     else{
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


bool iscycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            cout<<"Cycle exists\n";
            return true;
        }
    }
    cout<<"cycle does not exist\n";
    return false;
}

//Remove cycle
void removecycle(Node* head){
    //detect cycle
    bool iscycle=false;
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"cycle exist"<<endl;
            iscycle=true;
            break;
        }
    }

    if(!iscycle){
        cout<<"cycle does not exist\n";
        return;
    }
    slow=head;
    if(slow==head){
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;//removing cycle
    }
    else {
        Node* prev=fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
           fast =fast->next;
        }
        prev->next=NULL;
    }

}

};


int main(){

     List LL;
      LL.push_front(4);
    LL.push_front(3);
     LL.push_front(2);
      LL.push_front(1);

        LL.tail->next=LL.head;
     //LL.iscycle(LL.head);
     LL. removecycle(LL.head);

    LL.printList();
    return 0;
}