#include<bits/stdc++.h>
#define ll long long
using namespace std;
int speed[1500];
int consec[1500];
int rest[1500];
int vconsec[1500]={0};
int vrest[1500]={0};
int vpage[1500]={0};
int result[1500];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int page,cow;
	cin>>page>>cow;
	for(int i=0;i<cow;i++) cin>>speed[i]>>consec[i]>>rest[i];
	int minute=1;
	bool allfinished=false;
	for(int i=0;i<cow;i++) result[i]=-1;
	while(!allfinished){
		//cout<<minute<<endl;
		for(int i=0;i<cow;i++){
			if(result[i]==-1){
				if(vrest[i]>=rest[i]) vrest[i]=0;
				if(vrest[i]>0) vrest[i]++;
				else if(vconsec[i]<consec[i]){
					vpage[i]+=speed[i];
					vconsec[i]++;
				}
				else{
					vconsec[i]=0;
					vrest[i]++;
				}
				if(vpage[i]>=page) result[i]=minute;
				//cout<<i<<" "<<vpage[i]<<" "<<vconsec[i]<<" "<<vrest[i]<<endl;
			}
		}
		//cout<<endl;
		allfinished=true;
		for(int i=0;i<cow;i++){
			if(result[i]==-1){
				allfinished=false;
				break;
			}
		}
		minute++;
	}
	for(int i=0;i<cow;i++) cout<<result[i]<<endl;
	return 0;
}
