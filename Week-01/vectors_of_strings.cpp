#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int main(){
	// int n; 
	// cin>>n; 

	// vector<string> v;

	// for(int i=0;i<n; i++){
	// 	string s; 
	// 	cin>>s; 
	// 	v.push_back(s);
	// }

	// for(string val: v){
	// 	cout<<val<<endl;
	// }


	//  method 2 for name with space 

	int n; 
	cin>>n; 
	cin.ignore();
	vector<string> v; 

	for(int i=0;i<n; i++){
		string s; 
		getline(cin,s);
		v.push_back(s);
	}


     for(string val: v){
	 	cout<<val<<endl;
	 }

}