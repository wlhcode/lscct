#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[50];
char ope[50];
bool no_multi(){
	for(int i=1;i<50;i++){
		if(ope[i]=='*') return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ind=1;
	ope[0]='+';
	for(int i=0;i<50;i++) arr[i]=0;
	while(cin>>arr[ind]>>ope[ind+1]) ind+=2;
	for(int i=1;i<50;i++){
		if(ope[i]=='*'){
			ope[i]=ope[i-2];
			arr[i+1]*=arr[i-1];
			arr[i-1]=0;
		}
	}
	int ans=arr[1];
	for(int i=2;i<50;i+=2){
		if(ope[i]=='-') ans-=arr[i+1];
		else if(ope[i]=='+') ans+=arr[i+1];
	}
	cout<<ans<<endl;
	return 0;
}

