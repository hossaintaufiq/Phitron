#include<bits/stdc++.h>
using namespace std; 


void printVector(vector<int> v){
	for(int i: v){
		cout<<i<<" ";
	}
}



int main(){

	int N; 
	cin>>N;
	vector<int> A(N);
	
	

	for(int i=0;i<N;i++){
		cin>>A[i];
	}

	for(int i=0;i<A.size();i++){
		if(A[i]>0){
			A[i]=1;
		}
		else if(A[i]<0){
			A[i]=2;

		}
	}

	
	

	
	printVector(A);


}