#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sigma=0;
	cin>>n;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			sigma+=i;
			if(n/i!=i) sigma+=n/i;
		}
	}
	cout<<sigma<<endl;
}
