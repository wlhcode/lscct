#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int a=0,b=0,c=0,equalindex;
		char cmd;
		int len=s.length();
		for(int j=len-1;j>=0;j--){
			if(s.at(j)=='='){
				equalindex=j;
				for(int k=len-1;k>j;k--){
					if(s.at(k)=='-') c*=-1;
					else c+=(s.at(k)-'0')*pow(10,len-1-k);
				}
				break;
			}
		}
		for(int j=1;j<equalindex;j++){
			if(s.at(j)<'0'){
				for(int k=j-1;k>=0;k--){
					if(s.at(k)=='-') a*=-1;
					else a+=(s.at(k)-'0')*pow(10,j-1-k);
				}
				for(int k=equalindex-1;k>j;k--){
					if(s.at(k)=='-') b*=-1;
					else b+=(s.at(k)-'0')*pow(10,equalindex-1-k);
				}
				cmd=s.at(j);
				break;
			}
		}
		if(cmd=='+'){
			if(a+b==c) cout<<"CORRECT"<<endl;
			else cout<<"WRONG"<<endl;
		}
		if(cmd=='-'){
			if(a-b==c) cout<<"CORRECT"<<endl;
			else cout<<"WRONG"<<endl;
		}
		if(cmd=='*'){
			if(a*b==c) cout<<"CORRECT"<<endl;
			else cout<<"WRONG"<<endl;
		}
		//cout<<a<<" "<<cmd<<" "<<b<<" = "<<c<<endl;
	}
	return 0;
}

