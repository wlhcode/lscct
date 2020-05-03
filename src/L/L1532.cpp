#include<bits/stdc++.h>
#define int long long
using namespace std;
int s(int a){
	if(a==0) return 0;
	return a%10+s(a/10);
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=sqrt(n)+10;i>=sqrt(n)-1000;i--){
		if(i*i+s(i)*i-n==0){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl; 
}

