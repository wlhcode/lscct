#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3*n;j++){
			if(j<n) cout<<"*";
			else if(j<2*n) cout<<"x";
			else cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3*n;j++){
			if(j<n) cout<<" ";
			else if(j<2*n) cout<<"x";
			else cout<<"x";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3*n;j++){
			if(j<n) cout<<"*";
			else if(j<2*n) cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
