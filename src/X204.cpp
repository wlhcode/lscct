#include<bits/stdc++.h>
using namespace std;
char old[15][15];
char neu[15][15];
char f;
void floodfill(int x,int y){
	if(neu[x-1][y]!=f&&old[x][y]==old[x-1][y]){
		neu[x-1][y]=f; //left
		floodfill(x-1,y);
	}
	if(neu[x+1][y]!=f&&old[x][y]==old[x+1][y]){
		neu[x+1][y]=f; //right
		floodfill(x+1,y);
	}
	if(neu[x][y-1]!=f&&old[x][y]==old[x][y-1]){
		neu[x][y-1]=f; //up
		floodfill(x,y-1);
	}
	if(neu[x][y+1]!=f&&old[x][y]==old[x][y+1]){
		neu[x][y+1]=f; //down
		floodfill(x,y+1);
	}
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x,y;
	cin>>f>>x>>y;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cin>>old[j][i];
			neu[j][i]=old[j][i];
		}
	}
	neu[x][y]=f;
	floodfill(x,y);
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++) cout<<neu[j][i];
		cout<<endl;
	}
}

