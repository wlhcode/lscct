#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1500][3];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i][0];
	for(int i=0;i<n;i++) cin>>arr[i][1];
	for(int i=0;i<n;i++) cout<<char(arr[i][0]-arr[i][1]);
	return 0;
}

