#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string city[10005];
int tmp[10005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ind=0,cold=201,coldin;
	while(cin>>city[ind]>>tmp[ind]){
		if(tmp[ind]<cold){
			coldin=ind;
			cold=tmp[ind];
		}
		if(city[ind]=="Waterloo") break;
		ind++;
	}
	cout<<city[coldin]<<endl;
	return 0;
}

