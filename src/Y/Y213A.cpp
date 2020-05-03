#include<bits/stdc++.h>
using namespace std;
int arr[11][11];
int main(){
	int n,y=0;
	bool lck=true;
	cin>>n;
	for(int i=1;i<=n*n;i++){
		arr[(i-1)/n][y]=i;
		if(lck){
			if(y+1>=n) lck=false;
			else y++;
		}
		else if(lck==false){
			if(y-1<0) lck=true;
			else y--;
		}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cout<<arr[y][x];
			if(y+1<n) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
