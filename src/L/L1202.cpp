#include<bits/stdc++.h>
using namespace std;
char arr[15][15]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	arr[0][0]='o';
	arr[0][n+1]='o';
	arr[n+1][0]='o';
	arr[n+1][n+1]='o'; 
	for(int i=1;i<=n;i++){
		arr[0][i]='|';
		arr[n+1][i]='|';
		arr[i][0]='-';
		arr[i][n+1]='-';
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) arr[i][j]=' ';
	}
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		cin>>arr[y][x];
	}
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=n+1;j++) cout<<arr[j][i];
		cout<<endl;
	}
}

