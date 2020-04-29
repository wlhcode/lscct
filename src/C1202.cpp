#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int arr[5];
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
	for(int i=0;i<4;i++) cin>>arr[i];
	if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3]) cout<<"Fish At Constant Depth"<<endl;
	else if(arr[0]>arr[1]&&arr[1]>arr[2]&&arr[2]>arr[3]) cout<<"Fish Diving"<<endl;
	else if(arr[0]<arr[1]&&arr[1]<arr[2]&&arr[2]<arr[3]) cout<<"Fish Rising"<<endl;
	else cout<<"No Fish"<<endl;
	return 0;
}


