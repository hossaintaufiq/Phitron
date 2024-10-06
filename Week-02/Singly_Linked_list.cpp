#include<bits/stdc++.h>
using namespace std; 


class Node{
public:
	int val;
	Node*next;

	// Node(int value){
	// 	data=value;
	// 	Node=nullptr;
	// }
};



int main(){
	Node a,b;

	a.val=10;
	b.val=20;

	a.next=&b;
	b.next=nullptr;



	cout<<a.val<<endl;
	cout<<a.next->val;//derefaranced value of the object b using object a 




	}
