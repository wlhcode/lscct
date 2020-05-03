#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		while(s.length()>1){
			int n=0;
			for(int j=0;j<s.length();j++){
				n+=s.at(j)-'0';
			}
			s.clear();
			s=to_string(n);
		}
		cout<<s<<endl;
	}
	return 0;
}

