#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=-1;
	while(n!=0){
		cin>>n;
		if(n==0) break;
		int I=0,V=0,X=0,L=0,C=0;
		for(int i=1;i<=n;i++){
			int x=i;
			while(x>=100){
				C++;
				x-=100;
			}
			if(x>=90){
				X++;
				C++;
				x-=90;
			}
			while(x>=50){
				L++;
				x-=50;
			}
			if(x>=40){
				X++;
				L++;
				x-=40;
			}
			while(x>=10){
				X++;
				x-=10;
			}
			if(x>=9){
				I++;
				X++;
				x-=9;
			}
			while(x>=5){
				V++;
				x-=5;
			}
			if(x>=4){
				I++;
				V++;
				x-=4;
			}
			I+=x;
//			cout<<I<<" "<<V<<endl;
		}
		cout<<n<<": "<<I<<" i, "<<V<<" v, "<<X<<" x, "<<L<<" l, "<<C<<" c"<<endl;
	}
}
