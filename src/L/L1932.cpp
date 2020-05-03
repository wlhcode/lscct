#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double a,l,h;
	cin>>a>>l>>h;
	/*
	1c+1u+1r=a
	2c+4u+4r=l
	0c+1u+2r=h
	*/
	double c,u,r;
	c=(a-l/4)*2;
	r=h-a+c;
	u=h-2*r;
	printf("%.0lf %.0lf %.0lf\n",c,u,r);
	return 0;
}

