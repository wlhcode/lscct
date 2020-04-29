#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int arr[50000];
int hei[50000]={0};
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	bool ez=true;
	cin>>a>>b;
	for(int i=0;i<b;i++){
		cin>>arr[i];
		hei[arr[i]]++;
	}
	for(int i=0;i<=a;i++){
		if(hei[i]>0){
			cout<<"Height "<<i<<": "<<hei[i]<<" ornament";
			if(hei[i]>=2) cout<<"s";
			cout<<endl;
			ez=false;
		}
		//cout<<hei[i]<<endl;
	}
	if(ez) cout<<"No ornaments"<<endl;
	return 0;
}

