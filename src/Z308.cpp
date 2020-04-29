#include<bits/stdc++.h>
using namespace std;
char upd[500];
char tun[500];
int main(){
	cin>>tun;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<strlen(tun);j++) upd[j]=tun[j];
		for(int j=0;j<strlen(tun);j++){
			if(upd[j]=='L'){
				if(j==0){
					if(upd[strlen(upd)-1]=='L') tun[strlen(upd)-1]='O';
					else tun[strlen(upd)-1]='L';
				}
				else{
					if(upd[j-1]=='L') tun[j-1]='O';
					else tun[j-1]='L';
				}
			}
		}
	}
	cout<<tun<<endl;
}
