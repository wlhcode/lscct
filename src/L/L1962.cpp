#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long double a,b,c,d;
	cin>>a>>b>>c>>d;
	if(c==d){
		if(a>b) cout<<"Brian"<<endl;
		else if(b>a) cout<<"Louis"<<endl;
		else cout<<"Tie"<<endl;
		return 0;
	}
	long double brain=max(3*a/10,a-a*c/250),lua=max(3*b/10,b-b*d/250);
	if(brain>lua) cout<<"Brian"<<endl;
	else if(lua>brain) cout<<"Louis"<<endl;
	else cout<<"Tie"<<endl;
	return 0;
}

