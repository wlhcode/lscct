#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a=2010,q=5,b,c,e,f,year=2009;

bool bees(){
	if(year%2==1) return true;
	else return false;
}

bool cicadae(){
	if(year%3==1) return true;
	else return false;
}

bool beetles(){
	if(year%4==1||year%4==2) return true;
	else return false;
}

bool butterflies(){
	while(a<year){
		a+=q;
		q++;
	}
	if(a==year) return true;
	else return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>b>>c>>e>>f;
	if(c>0&&f>0){
		if(c>=f) f=0;
		else if(c<f) c=0;
	}
	while(1+1==2){
		year++;
		//cout<<year-2000<<endl;
		if(b>0&&!bees()) continue;
		if(e>0&&!beetles()) continue;
		if(f>0&&!butterflies()) continue;
		if(c!=f) if(c>0&&!cicadae()) continue;
		break;
	}
	cout<<year<<" "<<b+c+e+f<<endl;
	return 0;
}

