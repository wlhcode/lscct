#include<bits/stdc++.h>
using namespace std;
int sub[105];
string ppl[105];
double run[105];
string prt[105];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,time=-1,arrind=0;
	double rec=1e300;
	cin>>n;
	for(int i=0;i<n;i++) 	
		cin>>sub[i]>>ppl[i]>>run[i];
	for(int i=n-1;i>=0;i--){
		if(run[i]<rec){
			rec=run[i];
			prt[arrind]+=to_string(int(rec));
			prt[arrind]+=".";
			int dec=rec*100;
			dec=dec%100;
			if(dec<10) prt[arrind]+="0";
			prt[arrind]+=to_string(dec);
			prt[arrind]+=" ";
			prt[arrind]+=ppl[i];
			if(time!=-1){
				prt[arrind]+=" (+";
				double diff=sub[i]-time;
				diff/=3600;
				diff=ceil(diff);
				prt[arrind]+=to_string(int(diff));
				prt[arrind]+="h)";
			}
			time=sub[i];
			arrind++;
		}
	}
	while(arrind>0){
		cout<<prt[arrind-1]<<endl;
		arrind--;
	}
}

