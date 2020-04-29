#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		if(s.empty()) s.push(q);
		else if(s.top()==q) s.pop();
		else s.push(q);
	}
	if(s.empty()) cout<<"The switch box is routable"<<endl;
	else cout<<"The switch box is not routable"<<endl;
	return 0;
}

