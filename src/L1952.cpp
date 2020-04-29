#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,t,s=0,c,kc;
	char x,k;
	cin>>n>>x>>t;
	if(x>='a'&&x<='z') c=1;
	else if(x>='A'&&x<='Z') c=2;
	else c=3;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k>='a'&&k<='z') kc=1;
		else if(k>='A'&&k<='Z') kc=2;
		else kc=3;
		if(kc!=c) s+=abs(k-x);
	}
	if(s<t) cout<<"Acceptable!"<<endl;
	else cout<<"LCK please make an easier problem"<<endl;
	return 0;
}
