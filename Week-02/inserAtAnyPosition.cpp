#include<bits/stdc++.h> 
using namespace std ; 

class Node {
public: 
	int val; 
	Node*next; 


	Node(int val ){
		this-> val =val ; 
		this-> next= nullptr; 
	}
}; 

void insertAtAnyPostion(Node*&head,int pos, int val){
    Node*newNode= new Node(val);
    Node*temp=head;
   for (int i = 1; i <=pos-1; i++){
    temp=temp->next;
   }

   newNode->next=temp->next; 
   temp->next=newNode;
   
    cout<<endl<<endl<<"Inserted at postion "<< pos <<endl<<endl;

}

void insetAtTail(Node* &head , int value){

	Node*newNode = new Node(value);

	if(head==nullptr){
		head=newNode;
         cout<<"inserted At Head "<<endl<<endl;; 
		return; 
	}

	Node*temp=head;
	while(temp->next!=nullptr){
		temp=temp->next;
	}

	temp->next=newNode;

    cout<<"inserted At Tail"<<endl<<endl;; 
	
}

void printLinkedList(Node*head){

    cout<<endl;
	Node*temp=head; 

	while(temp!=nullptr){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){

	Node*head=NULL;

	while(true){

        cout<<"<<<-----Welcome to linked List ------>>>>>"<<endl;
        cout<<"Option 1: print the LinkedList : "<<endl;
		cout<<"Option 2: Insert a new node at the tail: "<<endl;
        cout<<"Option 3: Insert a new node at any position : "<<endl;
		cout<<"Option 4: Terminate the program  "<<endl;

		int option ; 
		cin>>option ; 
		if(option==2){
			cout<<"Enter your value: "<<endl; 
			int value; cin>>value; 
			insetAtTail(head,value);
		}
        else if(option==3){
            int pos,v; 
            cout<<"Enter your possition : "<<endl; 
            cin>>pos ;
            cout<<"Enter your value: " <<endl; 
            cin>>v;
			insertAtAnyPostion(head,pos,v);
		}
		else if(option==1){
			printLinkedList(head);
		}
		else if(option==4){
			return 0; 
		}

	}
	



	
}