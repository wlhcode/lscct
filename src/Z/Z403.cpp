#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	if(n==1||n==10||n==100){
		double nt=n;
		bool trouble;
		if(floor(log10(nt))==ceil(log10(nt))){
			n++;
			trouble=true;
		}
		for(int i=0;i<=n;i++){
			i==0 ? cout<<setfill(' ')<<setw(ceil(log10(n))+1)<<"|" : cout<<setfill(' ')<<setw(ceil(log10(n*n))+1)<<i;
			if(trouble&&i==n-1) n--;
		}
		cout<<endl;
		for(int i=0;i<=n;i++){
			if(trouble) n++;
			if(i==0){
				cout<<setfill('-')<<setw(ceil(log10(n))+1)<<"+"<<setfill('-')<<setw(nt*(ceil(log10(n*n))+1))<<"-"<<endl;
				i++;
			}
			cout<<setfill(' ')<<setw(ceil(log10(n)))<<i<<"|";
			for(int j=1;j<=n;j++){
				cout<<setfill(' ')<<setw(ceil(log10(n*n))+1)<<i*j;
				if(trouble&&j==n-1){
					n--;
					break;
				}
			}
			cout<<endl;
		}
	}
	else{
		for(int i=0;i<=n;i++){
			i==0 ? cout<<setfill(' ')<<setw(ceil(log10(n))+1)<<"|" : cout<<setfill(' ')<<setw(ceil(log10(n*n))+1)<<i;
		}
		cout<<endl;
		for(int i=0;i<=n;i++){
			if(i==0){
				cout<<setfill('-')<<setw(ceil(log10(n))+1)<<"+"<<setfill('-')<<setw(n*(ceil(log10(n*n))+1))<<"-"<<endl;
				i++;
			}
			cout<<setfill(' ')<<setw(ceil(log10(n)))<<i<<"|";
			for(int j=1;j<=n;j++){
				cout<<setfill(' ')<<setw(ceil(log10(n*n))+1)<<i*j;
			}
			cout<<endl;
		}
	}
	return 0;
}

