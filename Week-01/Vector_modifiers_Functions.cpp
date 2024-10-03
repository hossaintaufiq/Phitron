#include<bits/stdc++.h>
#include<vector> 

using namespace std; 

void printVector(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	cout<<"<<<---------Vector modifiers functions ---------->>"<<endl; 
	vector<int > x={1, 3,4 ,5,6, 7};
	vector<int> y= {10 , 20 , 30, 50,80};


	printVector(x);
	cout<<endl;
	printVector(y);
	cout<<endl;

	x=y;
	cout<<"After switching the values: ";
	printVector(x);

	cout<<endl; 

	cout<<"push and pop values in x ; "<<endl; 

	x.pop_back();
	printVector(x);

	cout<<endl;

	cout<<"After pushing  a value to the end: "<<endl; 
	x.push_back(100);
	printVector(x);
	cout<<endl;






}