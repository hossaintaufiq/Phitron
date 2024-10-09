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

void print_normal(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" " ;
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(Node*tail){
    Node*temp=tail;

    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
    cout<<endl;
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
   


    print_normal(head);
    print_tail(tail);


    


    
    return 0; 
}
