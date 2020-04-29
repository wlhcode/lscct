#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,count=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		s+=to_string(i);
		for(int j=0;j<s.size();j++){
			if(s.at(j)=='2') count++;
		}
		s.clear();
	}
	cout<<count<<endl;
	return 0;
}

