#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int arr[20];
int bru[20];
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++) bru[i]=arr[n-i-1];
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<133-(bru[0]-bru[i])<<endl;
	}
	return 0;
}

