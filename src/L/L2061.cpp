#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	if(s.length()%2==1) s.erase(s.length()/2,1);
	stack<char> q;
	int c=0;
	for(int i=0;i<s.length();i++){
		if(i<s.length()/2) q.push(s[i]);
		else{
			if(s[i]!=q.top()) c++;
			q.pop();
		}
	}
	cout<<c<<endl;
}
