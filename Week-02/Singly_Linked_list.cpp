#include<bits/stdc++.h>
using namespace std; 


class Node{
public:
	int val;
	Node*next;

	Node(int val){
		this->val=val;
		this->next=nullptr;
		
	}
};



int main(){
	// Node a,b;

	// a.val=10;
	// b.val=20;

	// a.next=&b;
	// b.next=nullptr; bacic using the simple rule 




	// cout<<a.val<<endl;
	// cout<<a.next->val;//derefaranced value of the object b using object a 


	// a proper linked list 

	Node a(10);
	Node b(30);

	a.next=&b;


	cout<<a.val<<endl; 
	cout<<b.val<<endl;


	cout<<a.next<<endl;
	cout<<a.next->val<<endl; 
	cout<<(*a.next).val<<endl;






	}
