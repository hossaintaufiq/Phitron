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

	cout<<"size of the vector : "<<v.size()<<endl;

	// vector type 3 

	vector<int > vec2(5,10);

	for(int i=0;i<vec2.size();i++){
		cout<<vec2[i]<<" ";
	}

	cout<<endl;

	// vector type 4 

	vector<int> vec3(v);//copying the values of the 1st vector 
	cout<<"after copying the elements of vector 1: "<<endl;
	for(int i=0;i<vec3.size();i++){
		cout<<vec3[i]<<" ";
	}
	cout<<endl;	

	// also can be initialized as like an array 

	// extra initialization 

	vector<int > vec4={2,4,5,6,7};
	cout<<"after initializing as like an array  the elements of vector : "<<endl;
	for(int i=0;i<vec4.size();i++){
		cout<<vec4[i]<<" ";
	}
	cout<<endl;	


}