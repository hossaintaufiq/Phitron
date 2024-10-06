#include<bits/stdc++.h>
using namespace std; 

class Node{
public: 
	int val; 
	Node*next;

	Node(int val ){
		this->val=val; 
		this-> next=nullptr;
	}
};

int main(){

	//Node head(10);// normal use case ;

	//dynamic linked list 
	Node*head=new Node(10);
	Node*a= new Node(20);

	head->next=a;// not using the address sign cz a is a pointer which is also a address 


	cout<<head->val<<endl; 
	cout<<a->val<<endl; 
	cout<<head->next->val;





	return 0; 



}