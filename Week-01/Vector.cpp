#include<bits/stdc++.h>
#include<vector> 

using namespace std; 

int main(){
	cout<<"STL Vectors: "<<endl<<endl;

	// vector <int > v; type 1


//  vector type 2 
	vector<int> v(5);

	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;

	cout<<"size of the vector : "<<v.size();

}