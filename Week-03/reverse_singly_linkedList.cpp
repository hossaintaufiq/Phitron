#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
    int val; 
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void printReverse(Node*n ){
    if(n==nullptr) return;

    printReverse(n->next);
    cout<<n->val<<" ";
    }

void reverse(Node* & head, Node*current_node){
    if(current_node->next==nullptr){
        head=current_node;
        return;
    }
    reverse(head,current_node->next);
    current_node->next->next=current_node;
    current_node->next=nullptr;

}

void print(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main(){


   Node*head=new Node(10);
   Node*a=new Node(20);
   Node*b=new Node(30);

   head->next=a;
   a->next=b;
   reverse(head, head);
   print(head);

    
   



      
    return 0; 
}
