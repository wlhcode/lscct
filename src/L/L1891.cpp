#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool prime(int n){
	if(n==1) return false;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int dx=abs(x1-x2),dy=abs(y1-y2);
	int sum=min(dx,dy)*2;
	dx-=sum/2;
	dy-=sum/2;
	sum+=4*((dx+dy)/2)+(dx+dy)%2;
	cout<<sum<<endl; 
}

/*
....E 4,2
....E
S.... 0,0
S.....E
1 4 5 8 9 12
an=4(floor(a/2)) + a mod 2
*/
