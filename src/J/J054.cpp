#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int me[5005];
int op[5005];
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>me[i];
	for(int i=0;i<n;i++) cin>>op[i];
	sort(me,me+n);
	sort(op,op+n);
	int match=0,tmp=0;
	for(int i=0;i<n;i++){
		while(me[tmp]<=op[i]){
			tmp++;
			if(tmp>=n) break;
		}
		if(tmp>=n) break;
		match++;
		op[i]=-1;
		me[tmp]=-1;
	}
	cout<<match<<endl;
	return 0;
}

