#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n*n;i++){
		cout<<i%k;
		if(i%n==0) cout<<endl;
		else cout<<" ";
	}
	return 0;
}

