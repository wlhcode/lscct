#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,t=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		//cout<<ceil(pow(i,0.5))<<endl;
		if(ceil(pow(i,0.5))*ceil(pow(i,0.5))!=i){
			int fcount=1;
			for(int j=2;j<pow(i,0.5);j++){
				if(i%j==0) fcount++;
				if(fcount>2) break;
			}
			if(fcount==2) t++;
		}
	}
	cout<<"The number of RSA numbers between "<<a<<" and "<<b<<" is "<<t<<endl;
	return 0;
}

