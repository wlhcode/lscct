#include<bits/stdc++.h>
using namespace std;
int a[1005]={0};
int b[1005];
int c[1005];
int d[1005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		a[q-1]++;
		b[q-1]=a[q-1];
	}
	sort(b,b+1000);
	int maxi=b[999],mini=b[998];
	int tmp=0,tmp2=0;
	for(int i=0;i<1000;i++){
		if(a[i]==maxi){
			c[tmp]=i+1;
			tmp++;
		}
		if(a[i]==mini){
			d[tmp2]=i+1;
			tmp2++;
		}
	}
	if(c[0]==d[0]){
		sort(c,c+tmp);
		cout<<c[tmp-1]-c[0]<<endl;
	}
	else{
		int l=0;
		for(int i=0;i<tmp;i++){
			for(int j=0;j<tmp2;j++) l=max(l,abs(c[i]-d[j]));
		}
		cout<<l<<endl;
	}
}
