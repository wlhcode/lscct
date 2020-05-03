#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str,rep;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		for(int j=1;j<=str.length();j++){
			rep.clear();
			bool correct=true;
			for(int k=0;k<j;k++) rep+=str.at(k);
			for(int k=0;k<str.length();k+=j){
				if(str.substr(k,j)!=rep){
					correct=false;
					break;
				}
			}
			if(correct){
				cout<<j<<endl;
				break;
			}
		}
		if(i<n-1) cout<<endl;
	}
	return 0;
}

