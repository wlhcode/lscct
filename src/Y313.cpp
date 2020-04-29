#include<bits/stdc++.h>
using namespace std;
int prime[15000];
int ind=1;
void pre(){
	prime[0]=2;
	for(int i=3;i<=10000;i+=2){
		bool yes=true;
		for(int j=3;j*j<=i;j+=2){
			if(i%j==0){
				yes=false;
				break;
			}
		}
		if(yes){
			prime[ind]=i;
			ind++;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	pre();
	int t;
	while(cin>>t){
		if(binary_search(prime,prime+ind,t)) cout<<t<<endl;
		else{
			int sum=0,q=0;
			while(t>1){
				while(t%prime[q]==0){
					t/=prime[q];
					sum+=prime[q];
				}
				q++;
			}
			cout<<sum<<endl;
		}
	}
}
