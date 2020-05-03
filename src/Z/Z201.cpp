#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double n,s,d,larges,smalls;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>s>>d;
		larges=(s+d)/2;
		smalls=(s-d)/2;
		smalls<0||int(smalls)!=smalls ? cout<<"impossible"<<endl : cout<<larges<<" "<<smalls<<endl;
	}
	return 0;
}
