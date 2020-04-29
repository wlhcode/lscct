#include<bits/stdc++.h>
#define ld long double
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ld hp,armor,res,p;
	cin>>hp>>armor>>res;
	armor=100/(100+armor);
	res=100/(100+res);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		s.clear();
		cin>>s>>p;
		if(s=="Physical") hp-=p*armor;
		else if(s=="Magical") hp-=p*res;
		else hp-=p;
	}
	cout<<setprecision(3)<<fixed<<hp<<endl;
	return 0;
}

