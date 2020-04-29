#include<bits/stdc++.h>
#define ll long long
int input[1001][3];
int oboard[1001][1001]={0};
int nboard[1001][1001];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a;
	cin>>a;
	for(int i=0;i<a;i++) cin>>input[i][0]>>input[i][1];
	for(int i=0;i<a;i++){
		oboard[input[i][0]-1][a-input[i][1]]=1;
		nboard[input[i][0]-1][a-input[i][1]]=1;
	}
	for(int y=0;y<a;y++){
		for(int x=0;x<a;x++){
			if(nboard[x][y]==1){
				for(int i=0;i<a;i++){
					if(i!=x) nboard[i][y]=0;
					if(i!=y) nboard[x][i]=0;
				}
				int v=x-1,w=y-1;
				while(v>=0&&w>=0){
					nboard[v][w]=0;
					v--;
					w--;
				}
				v=x+1,w=y+1;
				while(v<a&&w<a){
					nboard[v][w]=0;
					v++;
					w++;
				}
				v=x-1;w=y+1;
				while(v>=0&&w<a){
					nboard[v][w]=0;
					v--;
					w++;
				}
				v=x+1;w=y-1;
				while(v<a&&w>=0){
					nboard[v][w]=0;
					v++;
					w--;
				}
				break;
			}
		}
	}
	for(int y=0;y<a;y++){
		for(int x=0;x<a;x++){
			if(oboard[x][y]!=nboard[x][y]){
				cout<<"128"<<endl;
				return 0;
			}
		}
	}
	cout<<"0"<<endl;
	return 0;
}
