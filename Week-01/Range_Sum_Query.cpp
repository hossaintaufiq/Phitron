#include<bits/stdc++.h> 
using namespace std; 

// int sumArray(vector<int> v, int x, int y){
// 	int sum=0;
// 	for(int i=x-1;i<=y-1; i++){
// 		sum+=v[i];
// 	}

// 	return sum;


// }

int main(){
	// cout<<" Range sum Query "<<endl;


	// using brutforce method 

	// int n,q; 
	// cin>>n>>q ; 

	// vector<int> v; 
	// vector<int >summation;

	// for(int i=0;i<n;i++){
	// 	int value; 
	// 	cin>>value;
	// 	v.push_back(value);
	// }

	// while(q--){
	// 	int x,y;
	// 	cin>>x>>y;
	// 	int value = sumArray(v,x,y);
	// 	summation.push_back(value);

	// }

	// for(int i=0;i<summation.size();i++){
	// 	cout<<summation[i]<<endl;
	// }


	// using prefix_sum method 


	long long int n,q; 
		cin>>n>>q ; 

		vector<long long int> v(n); 
		vector<long long int>pre_fix(n);
		// vector<int >summation;

		for(int i=0;i<n;i++){
			
			cin>>v[i];
			
		}

		pre_fix[0]=v[0];



		for(int i=1;i<n;i++){
			pre_fix[i]=v[i]+pre_fix[i-1];

		}



		while(q--){
			int x,y;
			cin>>x>>y;

			x=x-1;y=y-1;
			if(x==0){
				cout<<pre_fix[y]<<endl;
			}
			else{
				cout<<pre_fix[y]-pre_fix[x-1]<<endl;
			}
			
			
			

		}

		












}