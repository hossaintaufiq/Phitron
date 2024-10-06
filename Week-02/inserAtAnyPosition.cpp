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

void insetAtTail(Node* &head , int value){

	Node*newNode = new Node(value);

	if(head==nullptr){
		head=newNode;
		return; 
	}

	Node*temp=head;
	while(temp->next!=nullptr){
		temp=temp->next;
	}

	temp->next=newNode;
	
}

void printLinkedList(Node*head){
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
		cout<<"Option 1: Insert a new node at the tail: "<<endl;
		cout<<"Option 2: print the LinkedList : "<<endl;
		cout<<"Option 3: Terminate the program  "<<endl;

		int option ; 
		cin>>option ; 
		if(option==1){
			cout<<"Enter your value: "<<endl; 
			int value; cin>>value; 
			insetAtTail(head,value);
		}
		if(option==2){
			printLinkedList(head);
		}
		if(option==3){
			return 0; 
		}

	}
	



	
}