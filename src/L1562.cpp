#include<bits/stdc++.h>
using namespace std;
char board[105][105];
int main(){
	int w,l;
	cin>>w>>l;
	for(int i=0;i<=w+1;i++){
		for(int j=0;j<=l+1;j++) board[j][i]='.';
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=l;j++) cin>>board[j][i];
	}
	
	for(int i=1;i<=w;i++){
		for(int j=1;j<=l;j++){
			if(board[j][i]=='*') continue;
			char count='0';
			for(int x=j-1;x<=j+1;x++){
				for(int y=i-1;y<=i+1;y++){
					if(board[x][y]=='*') count++;
				}
			}
			board[j][i]=count;
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=l;j++) cout<<board[j][i];
		cout<<endl;
	}
}
