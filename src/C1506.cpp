#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		if(q!=0) s.push(q);
		else s.pop();
	}
	while(s.size()!=0){
		ans+=s.top();
		//cout<<s.top()<<" ";
		s.pop();
		//cout<<ans<<" ";
	}
	cout<<ans<<endl;
	return 0;
}

