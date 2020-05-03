#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==180) cout<<"NO";
		else if(360%(180-n)==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
