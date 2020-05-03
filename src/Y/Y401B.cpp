#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<string> n;
	int index=0,maxlen=0,minlen=99999;
	while(cin>>s){
		n.push_back(s);
		if(s.length()>maxlen) maxlen=s.length();
		if(s.length()<minlen) minlen=s.length();
		s.clear();
		index++;
	}
	for(int i=0;i<index;i++){
		s+=n.at(i);
		while(s.length()<maxlen) s.insert(0,1,'0');
		n.at(i)=s;
		//cout<<n.at(i)<<endl;
		s.clear();
	}
	sort(n.begin(),n.end());
	for(int i=0;i<index;i++){
	    s+=n.at(i);
	    while(s.at(0)=='0'&&s.length()>1) s.erase(s.begin());
	    n.at(i)=s;
	    cout<<n.at(i)<<endl;
	    s.clear();
	}
	return 0;
}

