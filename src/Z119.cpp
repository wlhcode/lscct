#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long double c,d,e,f,g;
	cin>>c>>d>>e>>f>>g;
	cout<<setprecision(0)<<fixed<<(0.75+0.25*(c+d+e+f+g))*(2000*c+2500*d+3000*e+3500*f+4000*g)<<endl;
	return 0;
}

