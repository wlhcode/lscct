#include<bits/stdc++.h>
#define ll long long
int enu[11][11];
int realenu[110][110];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t=1,x=0,y=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) enu[i][j]=-1;
	}
	for(int i=0;i<n*n;i++){
		for(int j=0;j<n*n;j++) realenu[i][j]=-1;
	}
	for(int i=0;i<2*n-1;i++){
		if(i%4==0){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				x++;
			}
			y++;
			x--;
		}
		else if(i%4==1){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				y++;
			}
			y--;
			x--;
		}
		else if(i%4==2){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				x--;
			}
			y--;
			x++;
		}
		else if(i%4==3){
			for(int j=0;enu[x][y]==-1&&j<n;j++){
				enu[x][y]=t;
				t++;
				y--;
			}
			y++;
			x++;
		}
	}
	int realx=0,realy=0,realt=0;
	for(int i=0;i<2*n-1;i++){
		if(i%4==0){
			for(int p=0;realenu[realx][realy]==-1&&p<n;p++){
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++) realenu[realx+k][realy+j]=enu[k][j]+n*n*realt;
				}
				realt++;
				realx+=n;
			}
			realx-=n;
			realy+=n;
		}
		else if(i%4==1){
			for(int p=0;realenu[realx][realy]==-1&&p<n;p++){
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++) realenu[realx+k][realy+j]=enu[k][j]+n*n*realt;
				}
				realt++;
				realy+=n;
			}
			realx-=n;
			realy-=n;
		}
		else if(i%4==2){
			for(int p=0;realenu[realx][realy]==-1&&p<n;p++){
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++) realenu[realx+k][realy+j]=enu[k][j]+n*n*realt;
				}
				realt++;
				realx-=n;
			}
			realx+=n;
			realy-=n;
		}
		else if(i%4==3){
			for(int p=0;realenu[realx][realy]==-1&&p<n;p++){
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++) realenu[realx+k][realy+j]=enu[k][j]+n*n*realt;
				}
				realt++;
				realy-=n;
			}
			realx+=n;
			realy+=n;
		}
	}
	for(int i=0;i<n*n;i++){
		for(int j=0;j<n*n;j++){
			cout<<setfill('0')<<setw(log10(n*n*n*n)+1)<<realenu[j][i];
			if(j+1<n*n) cout<<" ";
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
