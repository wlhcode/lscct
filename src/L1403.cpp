#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int j,a,b;
	cin>>j>>a>>b;
	int p=a;
	for(int i=2;i<=j;i++) p+=(b-a);
	cout<<p<<endl;
	return 0;
}

