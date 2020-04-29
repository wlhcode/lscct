#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b=0,n;
	cin>>n;
	for(int i=0;i<2*n;i++){
		cin>>a;
		a=abs(a);
		if(a>b) b=a;
	}
	b*=2;
	cout<<b*b<<endl;
	return 0;
}

