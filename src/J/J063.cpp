#include<bits/stdc++.h>
using namespace std;
int ans[10][10];
int freq[10];
int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++) cin>>ans[j][i];
	}
	for(int a=1;a<=9;a++){
		bool test=false;
		for(int i=4;i<=6;i++){
			for(int j=4;j<=6;j++){
				bool ex=false;
				for(int x=1;x<=9;x++){
					if(ans[x][i]==a){
						ex=true;
						break;
					}
				}
				if(ex) continue;
				
				for(int y=1;y<=9;y++){
					if(ans[j][y]==a){
						ex=true;
						break;
					}
				}
				if(!ex){
					ans[j][i]=a;
					test=true;
				}
			}
			if(test) break;
		}
	}
	
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			freq[ans[j][i]]++;
		}
	}
	
	bool equal=true;
	for(int i=1;i<=9;i++){
		if(freq[i]!=9) equal=false;
	}
	
	if(equal){
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++) {
				cout<<ans[j][i];
				if(j<9) cout<<" ";
			}
			cout<<endl;
		}
	}
	else cout<<"No solution"<<endl;
}
