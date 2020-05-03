#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int arr[30][30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	arr[0][1]=1;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=i;j++){
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			cout<<arr[i][j];
			if(j<i) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

