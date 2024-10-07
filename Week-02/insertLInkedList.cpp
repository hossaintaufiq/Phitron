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

void deleteHead(Node*&head){
    if(head==nullptr){
        cout<<"head is not available"<<endl;
        return;
    }
    Node*deleteHead= head;
     head= head->next;
     delete deleteHead;
     cout<<"head deleted"<<endl;

}

void deleteFromPosition(Node* head,int pos){
    Node*temp=head;
    int address;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
        if(temp==nullptr){
            cout<<endl<<"Invalid position"<<endl;
            return;
        }
    }

    if(temp->next==nullptr){
        cout<<endl<<"Invalid position"<<endl;
            return;
    }

    Node*deleteNode = temp->next;

    temp->next=deleteNode->next;
    // or this comand can be used 
    // temp->next= temp->next->next;

    delete deleteNode;

    cout<<"Node deleted ;"<<endl<<endl;

}

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
        if(temp==nullptr){
            cout<<endl<<"invalid index"<<endl;
            return;
        }
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
       cout<<"Option 5: Delete from position "<<endl; 
       cout<<"Option 6: Delete head"<<endl; 
       cout<<"Option 7: input linkedList  ;"<<endl; 
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
        if(pos==0){
            insertAtHead(head,val);
        }
        else insertAtAnyPosition(head,pos,val);

       }
       else if(op==4){
        int val;
        cout<<"Enter your value : "<<endl;
        cin>>val;
        insertAtHead(head,val);
       }
       else if(op==5){
        int pos;
        cout<<"Enter your postion: "<<endl;
        cin>>pos;
        if(pos==0){
            deleteHead(head);
        }
        else deleteFromPosition(head,pos);
       }
       else if(op==6){
        deleteHead(head);
       }
       else if(op==7){

        int val; 
        
        while(true){

            cin>>val;
            if(val==-1){
                break;
            }
            InsertAtTheTail(head,val);
        }
        
       }
       else if(op==8){
        
       }
       else if(op==9){
        return 0;
        
       }
       
    }  
    
}
