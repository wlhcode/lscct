#include<bits/stdc++.h>
using namespace std;
int b[10][10];
bool valid(int x,int y,int n){
	for(int i=0;i<9;i++){
		if(b[i][y]==n||b[x][i]==n) return 0;
	}
	for(int i=x/3*3;i<x/3*3+3;i++){
		for(int j=y/3*3;j<y/3*3+3;j++){
			if(b[i][j]==n) return 0;
		}
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>b[i][j];
			if(b[i][j]==0) q++;
		}
	}
	while(q>0){
		bool p[10][10][12];
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				for(int k=1;k<=9;k++) p[i][j][k]=0;
			}
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(b[i][j]!=0) continue;
				for(int k=1;k<=9;k++){
					if(valid(i,j,k)) p[i][j][k]=1;
					else p[i][j][k]=0;
				}
			}
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				int t=0,g=0;
				for(int k=1;k<=9;k++){
					if(p[i][j][k]==1){
						t++;
						g=g*10+k;
					}
				}
				if(t==1){
					for(int k=0;k<9;k++){
						p[k][j][g%10]=0;
						p[i][k][g%10]=0;
					}
					for(int m=i/3*3;m<i/3*3+3;m++){
						for(int n=j/3*3;n<j/3*3+3;n++) p[m][n][g%10]=0;
					}
					b[i][j]=g%10;
					q--;
					continue;
				}
				while(g>0){
					bool fill=1;
					for(int m=0;m<9;m++){
						if((m!=i&&p[m][j][g%10]==1)||(m!=j&&p[i][m][g%10]==1)){
							fill=0;
							break;
						}
					}
					if(fill){
						for(int m=i/3*3;m<i/3*3+3;m++){
							for(int n=j/3*3;n<j/3*3+3;n++) p[m][n][g%10]=0;
						}
						b[i][j]=g%10;
						q--;
						break;
					}
					fill=1;
					for(int m=i/3*3;m<i/3*3+3;m++){
						for(int n=j/3*3;n<j/3*3+3;n++){
							if(m==i&&n==j) continue;
							else if(p[m][n][g%10]==1){
								fill=0;
								break;
							}
						}
					}
					if(fill){
						for(int k=0;k<9;k++){
							p[k][j][g%10]=0;
							p[i][k][g%10]=0;
						}
						b[i][j]=g%10;
						q--;
						break;
					}
					g/=10;
				}
			}
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cout<<b[i][j];
			if(j==8) cout<<endl;
			else cout<<" ";
		}
	}
}
