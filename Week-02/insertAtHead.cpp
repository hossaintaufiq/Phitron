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

void insertAtHead(Node* &head,int val){
    Node*newNode = new Node(val);
    newNode->next = head;
    head=newNode;
    cout<<"inserted at head "<<endl<<endl;

}



void insertAtAnyPosition(Node*&head, int pos,int val){
    Node*newNode= new Node(val);

    Node*temp=head;

    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;

    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;
  
}
void InsertAtTheTail(Node*&head,int val){
   
    Node*newNode=new Node(val);

    if(head==nullptr){
        head=newNode;
        cout<<"Insert At head "<<endl<<endl;
        return ;
    }
     Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
    cout<<"Insert at tail "<<endl<<endl;
}

void printlinkedList(Node*head){
    Node*temp=head; 
    cout<<endl;

    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    cout<<endl<<endl;
}

int main(){
    Node*head=nullptr;
    cout<<"<<<<-----------Welcome to the linked list---------->>>>>>>>"<<endl;

    while (true){
       
       cout<<"Choose a option : "<<endl;
       cout<<"Option 1: Print the linked list ;"<<endl; 
       cout<<"Option 2: Insert at the tail"<<endl; 
       cout<<"Option 3: Insert at any position "<<endl; 
       cout<<"Option 4: Insert at head ;"<<endl; 
       cout<<"Option 5: Print the linked list ;"<<endl; 
       cout<<"Option 6: Print the linked list ;"<<endl; 
       cout<<"Option 7: Print the linked list ;"<<endl; 
       cout<<"Option 8: Print the linked list ;"<<endl;
       cout<<"Option 9: Terminate the program"<<endl;


       int op; 
       cin>>op; 

       if(op==1){
        printlinkedList(head);
       }
       else if(op==2){
        cout<<"Enter Your value: "<<endl;
        int val;
        cin>>val;

        InsertAtTheTail(head,val);
       }
       else if(op==3){
        int pos,val;
        cout<<"Enter your postion: "<<endl;
        cin>>pos;
        cout<<"Enter your value: "<<endl;
        cin>>val;

        insertAtAnyPosition(head,pos,val);

       }
       else if(op==4){
        int val;
        cout<<"Enter your value : "<<endl;
        cin>>val;
        insertAtHead(head,val);
       }
       else if(op==5){
        
       }
       else if(op==6){
        
       }
       else if(op==7){
        
       }
       else if(op==8){
        
       }
       else if(op==9){
        return 0;
        
       }
       
    }  
    
}
