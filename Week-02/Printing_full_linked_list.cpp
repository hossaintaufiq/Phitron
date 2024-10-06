#include<bits/stdc++.h>
using namespace std; 

class Node{
public: 
	int val ;
	Node*next; 

	Node(int val ){
		this->val=val;
		this->next=nullptr;
	}
};

int main(){
	Node*head= new Node(10);
	Node*a= new Node(20);
	Node*b= new Node(30);
	Node*c= new Node(40);
	Node*d= new Node(50);

	Node*e= new Node(60);
	Node*f= new Node(70);


	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	e->next=f;


	// printing using head // bad approce 

	// cout<<head->val<<endl; 
	// cout<<head->next->val<<endl; 
	// cout<<head->next->next->val<<endl; 
	// cout<<head->next->next->next->val<<endl; 
	// cout<<head->next->next->next->next->val<<endl; 
	// cout<<head->next->next->next->next->next->val<<endl; 
	// cout<<head->next->next->next->next->next->next->val<<endl;

	//cout<<"Using while loop to print the linked list "<<endl; 
// in this way we lost the head cz last we assign head to the null 


	// while(head!=nullptr){
	// 	cout<<head->val<<endl;
	// 	head=head->next;

	// }


    cout<<"last way"<<endl;
	Node*temp=head;
	while(temp!=nullptr){
		cout<<temp->val<<endl;
		temp=temp->next;
	}




	
}





