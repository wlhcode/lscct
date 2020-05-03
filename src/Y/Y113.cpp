#include<bits/stdc++.h>
using namespace std;
char board[10][10];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int kill=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++) board[j][i]='.';
	}
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>board[j][i];
			if(board[j][i]=='P'){
				if(board[j-1][i-1]=='p'){
					kill++;
					board[j-1][i-1]='K';
				}
				if(board[j+1][i-1]=='p'){
					kill++;
					board[j+1][i-1]='K';
				}
			}
//			for(int k=1;k<=8;k++){
//				for(int l=1;l<=8;l++) cout<<board[l][k];
//				cout<<endl;
//			}
		}
	}
	cout<<kill<<endl;
}

