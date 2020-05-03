#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int g,l;
	while(cin>>g>>l){
	int t=l/g;
	if(t*g==l){
		if(l==g) cout<<1<<endl;
		else{
			int n=0;
			for(int i=1;i<=t;i++){
				while(t%i!=0) i++;
				if(gcd(t/i,i)==1){
					n++;
//					cout<<t/i<<" "<<i<<endl;
				}
			}
			cout<<n<<endl;
		}
	}
	else cout<<0<<endl;
	}
}

