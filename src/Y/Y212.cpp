#include<bits/stdc++.h>
using namespace std;
int arr[11][11];
int main(){
	int n;
	cin>>n;
	int k=1;
	for(int t=0;t<2*n;t++){
		for(int x=min(t,n-1);x>=0;x--){
			int y=t-x;
			if(y>=n) break;
			arr[x][y]=k;
			k++;
			if(k>n*n) break;
		}
		if(k>n*n) break;
	}
	for(int y=0;y<n;y++){
		for(int x=0;x<n;x++){
			cout<<arr[x][y];
			if(x+1!=n) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
