#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double r=0,a,b;
	while(cin>>a>>b){
		double l=pow(a*a+b*b,0.5);
		if(l>r) r=l;
	}
	cout<<setprecision(3)<<fixed<<M_PI*r*r<<endl;
	return 0;
}

