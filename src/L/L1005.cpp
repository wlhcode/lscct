#include<bits/stdc++.h>
using namespace std;
int ppl[1500];
int train[1500];
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0;i<1499;i++) train[i]=-1;
	int n,t,total=0,calc=0;
	cin>>n>>t;
	for(int i=1;i<=t;i++){
		cin>>ppl[i];
		total+=ppl[i];
	}
//	cout<<total<<endl;
	for(int i=0;i<n;i++){
		int tmp,time=0;
		cin>>tmp;
		while(tmp>=1&&train[tmp]==-1){
			train[tmp]=time;
			tmp--;
			time++;
		}
	}
	for(int i=1;i<=t;i++) calc+=ppl[i]*train[i];
	long double a=calc,b=total;
	cout<<setprecision(2)<<fixed<<a/b<<endl;
}
