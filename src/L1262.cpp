#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int v,n,c=0,t=0,p;
	cin>>v>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		if(c<p){
			c=v;
			t++;
		}
		c-=p;
	}
	cout<<t<<endl;
	return 0;
}

