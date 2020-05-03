#include<bits/stdc++.h>
using namespace std;
int arr[21][21];
int main(){
	int n,s,x=0,y=0;
	cin>>n>>s;
	
	for(int i=s;;i=(i+1)%10+(i+1)/10){
		arr[x][y]=i;
		if(y==x){
			x++;
			y=0;
		}
		else y++;
		if(x>=n) break;
	}
	
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			if(arr[y][x]!=0){
				cout<<arr[y][x];
				if(y+1<n) cout<<" ";
			}
			else cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
