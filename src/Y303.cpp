#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int ken[10010];
string a;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>a>>n;
	memset(arr,0,10004);
	memset(ken,0,10004);
	bool minus=0;
	if(a[0]=='-'){
		minus=!minus;
		a.erase(0,1);
	}
	if(n<0){
		minus=!minus;
		n*=-1;
	}
	if(a.length()==1&&a[0]=='0'){
		cout<<0<<endl;
		return 0;
	}
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	if(minus) cout<<"-";
	for(int i=0;i<a.length();i++) ken[10004-a.length()+i]=int(a[i]-'0');
	for(int j=0;j<n;j++){
		bool fow=0;
		for(int i=10003;i>=0;i--){
			arr[i]+=ken[i];
			if(fow){
				arr[i]++;
				fow=0;
			}
			if(arr[i]>=10){
				arr[i]-=10;
				fow=1;
			}
		}
	}
	bool leadzero=1;
	for(int i=0;i<10004;i++){
		while(arr[i]==0&&leadzero==1){
			i++;
			if(i>=10004) break;
		}
		if(i>=10004) break;
		leadzero=0;
		cout<<arr[i];
	}
	if(leadzero) cout<<0;
	cout<<endl;
}

