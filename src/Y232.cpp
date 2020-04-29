#include<bits/stdc++.h>
#define ll long long
int enu[11][11];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t=1,x=0,y=0;
	cin>>n;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) enu[i][j]=-1;
	}
	for(int i=0;i<2*n-1;i++){
		if(i%4==1){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				x++;
			}
			y--;
			x--;
		}
		else if(i%4==0){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				y++;
			}
			y--;
			x++;
		}
		else if(i%4==3){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				x--;
			}
			y++;
			x++;
		}
		else if(i%4==2){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				y--;
			}
			y++;
			x--;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<enu[j][i];
			if(j+1<n) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
01 02 03 04
12 13 14 05
11 16 15 06
10 09 08 07
*/
