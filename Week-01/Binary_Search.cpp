#include<bits/stdc++.h>
using namespace std; 


bool binarySearch(vector<int> &v, int n, int value){
	int l,r;
	l=0;
	r=n-1;

	while(l<=r){
		int midIndex=(l+r)/2;

		if(v[midIndex]==value){
			return true;
		}
		if(value>v[midIndex]){
			l=midIndex+1;
		}
		else {
			r=midIndex-1;
		}
	}
	return false; 
}

int main(){
	int n, q;
	cin>>n>>q;
	vector<int>v(n);

	for(int i=0;i<n; i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());

	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl; 

	while(q--){

		int x; 
		cin>>x; 
		bool result= binarySearch(v,n,x);
		if(result){
			cout<<"found"<<endl;
		}
		else{
			cout<<"not found";
		}

	}

}

// this will give TLE 
// solve it in main function for avoiding tle
