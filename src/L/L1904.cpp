#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;
int a[1000005];
int p[1000005];
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	bool allneg=true;
bool allpos = true;
	cin>>n>>k;
  int mn = INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0) p[i]=a[i];
		else p[i]=p[i-1]+a[i];
		if(a[i]>0) allneg=false; else allpos = false;
    mn = min(mn, a[i]);
	}
  if(allpos) cout << p[n-1] - mn << endl;
	else if(n==1) cout<<a[0]*k<<endl;
	else if(!allneg){
		if(k==0){
			int s=0,b=0;
			for(int i=0;i<n;i++){
				b=min(b,p[i]-s);
				s=max(p[i],s);
			}
			cout<<max(p[n-1]-b, p[n-1])<<endl;
		}
		else if(k<0){
			int s=0,b=INT_MAX;
			for(int i=0;i<n;i++){
				b=min(b,p[i]-s);
				s=max(p[i],s);
			}
			cout<<p[n-1]+(k-1)*b<<endl;
		}
		else{
			int s=INT_MAX,b=INT_MIN;
			for(int i=0;i<n;i++){
				b=max(b,p[i]-s);
				s=min(p[i],s);
			}
			cout<<p[n-1]+b*(k-1)<<endl;
		}
	}
	else{
		if(k==0) cout<<0<<endl;
		else if(k<0) cout<<p[n-1]*k<<endl;
		else{
			sort(a,a+n);
			cout<<p[n-1]+(k-1)*a[n-1]<<endl;
		}
	}
}
