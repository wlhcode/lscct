#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double n,t1,p1,t2,p2,t3,p3;
	double q1,q2,q3;
	cin>>n>>t1>>p1>>t2>>p2>>t3>>p3;
	q1=ceil(n/t1)*p1;
	q2=ceil(n/t2)*p2;
	q3=ceil(n/t3)*p3;
	cout<<setprecision(0)<<fixed;
	if(min(q1,min(q2,q3))==q1) cout<<q1<<endl;
	else if(min(q1,min(q2,q3))==q2) cout<<q2<<endl;
	else cout<<q3<<endl;
	return 0;
}

