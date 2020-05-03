#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	if(n%2==1){
		cout<<7;
		n-=3;
	}
	for(int i=0;i<n;i+=2) cout<<1;
	cout<<endl; 
}
