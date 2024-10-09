#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
    int val; 
    Node* next;
    Node*pre;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->pre = nullptr;
    }
};

void printLinkedList(Node *head){
    Node*temp=head;

    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reversePrint(Node*tail){
    Node*temp=tail;

    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
    cout<<endl;
}

void insert_at_any_position(Node*head, int pos, int val){
    Node*newNode = new Node(val);
    Node*temp=head;

    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }


// main 4 opjective for dubly linked list insert ; 
    newNode->next=temp->next;

    temp->next =newNode;
    newNode->next->pre=newNode;

    newNode->pre=temp;

}
int size(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*tail=c;


    head->next=a; 
    a->pre=head; 
    a-> next=b; 
    b->pre=a;
    b->next=c;
    c->pre=b;


   


    printLinkedList(head);
    cout<<endl;
    reversePrint(tail);
    cout<<endl;

    int pos,val;
    if(pos>=size(head)){
        cout<<"Invalid "<<endl;
    }
    else {
        insert_at_any_position(head, pos, val );

    }

    
    cout<<endl;
    printLinkedList(head);
    cout<<endl;
    reversePrint(tail);
    cout<<endl;



    int count=size(head);
    cout<<count<<endl;


    
    return 0; 
}
