#include<bits/stdc++.h> 
#include<vector> 

using  namespace std; 

int main(){
	cout<<"<-----Vector Capacity------->>"<<endl<<endl;

	vector <int > v(5);
	vector<int> v1;

	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}

	cout<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<"Before capacity : "<< v.capacity()<<endl;

	v.push_back(10);

	cout<<"after update capacity : " <<v.capacity()<<endl;
	

	cout<<"Before clearing the vector : "<<endl; 
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<"Is v1 vector empty?: "<<v1.empty()<<endl;

	v.resize(10);

	cout<<"After resizing the vector size : "<<v.size()<<endl;

	// clearing the vector ; 

	v.clear();

	cout<<"After clearing the vector : "<<endl; 
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}



}