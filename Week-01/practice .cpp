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
	vector<int>B(N);
	vector<int>C;

	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	for(int i=0;i<N;i++){
		cin>>B[i];
	}

	C=B;
	C.insert(B.end(),A.begin(),A.end());

	printVector(C);


}