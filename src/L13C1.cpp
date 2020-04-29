#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin,s);
	bool space=false,afterwub=false;
	for(int i=0;i<s.length();i++){
		while(s.substr(i,3)=="WUB"){
			i+=3;
			afterwub=true;
			if(i>=s.length()) break;
		}
		if(i>=s.length()) break;
		if(afterwub&&space) cout<<" ";
		cout<<s.at(i);
		space=true;
		afterwub=false;
	}
	cout<<endl;
	return 0;
}

