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
		break;
	}
	
	Node *temp =head;

	while(temp->next!nullptr){
		temp=temp->next;
	}

	temp->next=newNode;

}

void printLinkedList(Node*head){
	Node*temp=head; 
	while(temp !=nullptr){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
}

int main(){
	Node*head=nullptr;

	cout<<"Option 1: Insert at tail "<<endl;
	int op;

	cin>>op ; 
	if(op==1){
		int v; 
		cin>>v;
		insert_at_tail(head,v);
	}
}