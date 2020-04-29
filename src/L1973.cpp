#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[1000000];
bool prime(int n){
	int m=sqrt(n);
	if(n==1) return false;
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double n,k;
	int ind=0;
	cin>>n>>k;
	for(int i=k;i>=2;i--){
		while(fmod(n,i)==0){
			arr[ind]=i;
			ind++;
			n/=i;
		}
	}
	if(n==1){
		cout<<ind<<endl;
		for(int i=ind-1;i>0;i--) cout<<arr[i]<<" ";
		cout<<arr[0]<<endl;
	}
	else cout<<"Brain GG"<<endl;
}

