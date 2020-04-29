#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int q, n=0;
	while(cin>>s){
		if(s!="?") arr[n]=stoi(s);
		else{
			arr[n]=-1;
			q=n;
		}
		n++;
	}
	if(q>=2) cout<<(arr[1]-arr[0])*q+arr[0]<<endl;
	else if(q==1) cout<<(arr[2]-arr[0])/2*q+arr[0]<<endl;
	else cout<<2*arr[1]-arr[2]<<endl;
}
