#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
char con[10];
int sco[10];
int tot[10];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0;i<5;i++){
		cin>>con[i];
		for(int j=0;j<5;j++) cin>>sco[j];
		sort(sco,sco+5);
		tot[i]=sco[1]+sco[2]+sco[3];
	}
	for(int i=0;i<3;i++){
		//for(int j=0;j<5;j++) cout<<tot[j]<<" ";
		int place=-1,index;
		for(int j=0;j<5;j++){
			if(tot[j]>place){
				place=tot[j];
				index=j;
			}
		}
		if(i==0) cout<<"First - ";
		if(i==1) cout<<"Second - ";
		if(i==2) cout<<"Third - ";
		cout<<con[index]<<endl;
		tot[index]=-999;
	}
	return 0;
}

