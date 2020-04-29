#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a;
	cin>>a;
	ll gb=0,mb=0,kb=0,b=0;
	while(a>=1024*1024*1024){
		gb++;
		a-=1024*1024*1024;
	}
	while(a>=1024*1024){
		mb++;
		a-=1024*1024;
	}
	while(a>=1024){
		kb++;
		a-=1024;
	}
	b=a;
	bool prev=false;
	if(gb>0){
		cout<<gb<<"GB";
		prev=true;
	}
	if(mb>0){
		if(prev) cout<<" ";
		cout<<mb<<"MB";
		prev=true;
	}
	if(kb>0){
		if(prev) cout<<" ";
		cout<<kb<<"KB";
		prev=true;
	}
	if(b>0){
		if(prev) cout<<" ";
		cout<<b<<"B";
		prev=true;
	}
	cout<<endl;
	return 0;
}

