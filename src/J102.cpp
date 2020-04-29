#include<bits/stdc++.h>
using namespace std;
int r[200005][4];
int main(){
	int x,y,n,a=0,q=0;
	bool small=0;
	cin>>y>>x>>n;
	for(int i=1;i<=n;i++){
		cin>>r[i][0]>>r[i][1]>>r[i][2];
		if(r[i][0]>=y&&q==0) q=i-1;
		if(r[i][0]<y) small=1;
	}
	if(q==0&&small) q=n;
	if(!small) q=0;
	while(q>0){
		y=r[q][0];
		bool gone=0;
		while(r[q][0]==y){
			if(!gone&&r[q][1]>r[q][2]&&x<=r[q][1]&&x>=r[q][2]){
				x=r[q][2];
				a++;
				gone=1;
			}
			else if(!gone&&r[q][1]<r[q][2]&&x>=r[q][1]&&x<=r[q][2]){
				x=r[q][2];
				a++;
				gone=1;
			}
			q--;
			if(q<=0) break;
		}
	}
	cout<<a<<endl;
}
