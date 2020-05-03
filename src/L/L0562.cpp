#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int arr[200];
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
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b;i++) cin>>arr[i];
	sort(arr,arr+b);
	for(int i=b-1;i>=b-a;i--) cout<<arr[i]<<endl;
	return 0;
}

