#include<bits/stdc++.h>
using namespace std ;

class Node{
public: 
	int val;
	Node*next;

	Node(int val){
		this->val=val;
		this->next=nullptr;
	}
};

void insert_at_tail(Node*&head,int v){
	Node*newNode= new Node(v);

	if(head ==nullptr){
		head=newNode;
		return;
	}
	
	Node *temp =head;

	while(temp->next!=nullptr){
		temp=temp->next;
	}

	temp->next=newNode;

}

void printLinkedList(Node*head){
	Node*temp=head; 

	cout<<"Your linkedList: "; 
	while(temp !=nullptr){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node*head=nullptr;

	while(true){
		cout<<"Option 1: Insert at tail : "<<endl;
		cout<<"Option 2: Print the linked list :  "<<endl;
		cout<<"Option 3: Terminate the Program :  "<<endl;
		cout<<"Option 1: Insert at tail "<<endl;
	int op;

	cin>>op ; 
	if(op==1){
		int v; 
		cin>>v;
		insert_at_tail(head,v);
	}
	if(op==2){
		printLinkedList(head);
	}
	if(op==3){
		return 0 ; 
	}

	
	}

	


}