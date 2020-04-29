#include<bits/stdc++.h>
using namespace std;
string s;
string o;
main(){
	long long a;
	bool first=true;
	cin>>a;
	s+=to_string(a);
	sort(s.begin(),s.end());
	for(int i=2;i<=9;i++){
		o.clear();
		o+=to_string(a*i);
		sort(o.begin(),o.end());
		if(s==o){
			if(!first) cout<<" ";
			cout<<i;
			first=false;
		}
	}
	if(first) cout<<"NO";
	cout<<endl;
}

