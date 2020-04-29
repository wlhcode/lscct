#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=n-2;i>=0;i--){
		if(arr[i]!=arr[i+1]){
			cout<<arr[i]<<endl;
			return 0;
		}
	}
	return 0;
}

