#include<iostream>
using namespace std;
int main(){
	int m,n,way=0;
	cin>>m>>n;
	for(int i=1;i<=m&&i<=10;i++){
		for(int j=1;j<=n&&j<=10;j++){
			if(i+j==10){
				way++;
				break;
			}
		}
	}
	cout<<"There ";
	if(way==1) cout<<"is ";
	else cout<<"are ";
	cout<<way<<" way";
	if(way!=1) cout<<"s";
	cout<<" to get the sum 10."<<endl;
	return 0;
}
