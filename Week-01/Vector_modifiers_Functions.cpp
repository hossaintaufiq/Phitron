#include<bits/stdc++.h>
#include<vector> 

using namespace std; 

void printVector(vector<int> v){
	for(int i: v){
		cout<<i<<" ";
	}
}

int main(){
	cout<<"<<<---------Vector modifiers functions ---------->>"<<endl; 
	vector<int > x={1, 5,4 ,5,6, 7};
	vector<int> y= {10 , 20 , 30, 50,80};


	printVector(x);
	cout<<endl;
	printVector(y);
	cout<<endl;

	// x=y;
	// cout<<"After switching the values: ";
	// printVector(x);

	// cout<<endl; 

	cout<<"push and pop values in x ; "<<endl; 

	x.pop_back();
	printVector(x);

	cout<<endl;

	cout<<"After pushing  a value to the end: "<<endl; 
	x.push_back(100);
	printVector(x);
	cout<<endl;

	cout<<"normally insert a value to vector x : "<<endl; 
	x.insert(x.begin()+3, 500);

	printVector(x);
	cout<<endl; 

	cout<<"Inserting another vector with a vector x : "<<endl; 
	x.insert(x.begin()+1,y.begin()+2,y.end());

	printVector(x);
	cout<<endl;


	cout<<"delete a random value: "<<endl; 
	x.erase(x.begin(),x.begin()+2);
	printVector(x);
	cout<<endl;

	cout<<"Replacing the vector elements: "<<endl; 
	replace(x.begin(),x.end(),5, 1000);
	printVector(x); 
	cout<<endl; 

	// find function in a vector : 

	cout<<"Find functions: "<<endl; 

	//vector<int>::iterator it; //iterator 
	// it= find(x.begin(),x.end(),6);
	// we can use auto comand 
	// auto it;not like this 
	auto it= find(x.begin(),x.end(),6);//we can use this instead ; 

	cout<<*it<<endl;

	if(it==x.end()) cout<<"Not found";
	else cout<<"Found";



	return 0; 





}