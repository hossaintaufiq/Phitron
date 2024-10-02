#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Complexity"<<endl;
	cout<<""<<endl;

	int n;
	cin>>n; 

	// while(n>0){
	// 	int digit= n%10;
	// 	cout<<digit<<endl;
	// 	n/=10;
	// }

	// for(int i=1;i<=n;i=i*2){
	// 	cout<<i<<endl;
	// }
 	

 	//  utpadok case -1  logn
// for(int i=1;i<=sqrt(n);i++){
// 		if(n%i==0){
// 			cout<<i<<" ";
// 			if(n/i !=i){
// 				cout<<n/i<<endl;
// 			}
// 		}
// 	}

// utpadok case -2

	// for(int i=1;i*i<=n;i++){
	// 	if(n%i==0){
	// 		cout<<i<<" ";
	// 		if(n/i !=i){
	// 			cout<<n/i<<endl;
	// 		}
	// 	}
	// }

	// nlogn

	for(int i=1;i<=n;i++){
		int x=i;
		while(x>0){
			int digit=x%10;
			cout<<digit<<" ";
			x/=10;

		}
		cout<<endl;
	}


}