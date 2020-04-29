#include<bits/stdc++.h>
using namespace std;
int a[10010];
int b[10010];
int s[10010];
string m,n;
int main(){
	bool minus=0,add=1;
	memset(a,0,10004);
	memset(b,0,10004);
	memset(s,0,10004);
	cin>>m>>n;
	if(m[0]=='-'&&n[0]=='-'){
		minus=1;
		m.erase(0,1);
		n.erase(0,1);
	}
	else if(m[0]=='-'){
		m.erase(0,1);
		add=0;
	}
	else if(n[0]=='-'){
		swap(m,n);
		m.erase(0,1);
		add=0;
	}
	for(int i=0;i<n.length();i++) a[10004-n.length()+i]=int(n[i]-'0');
	for(int i=0;i<m.length();i++) b[10004-m.length()+i]=int(m[i]-'0');
	if(add){
		bool fow=0;
		for(int i=10003;i>=0;i--){
			s[i]=a[i]+b[i];
			if(fow){
				s[i]++;
				fow=0;
			}
			if(s[i]>=10){
				s[i]-=10;
				fow=1;
			}
		}
	}
	else{
		again:
		bool bak=0;
		for(int i=10003;i>=0;i--){
			s[i]=a[i]-b[i];
			if(bak){
				s[i]--;
				bak=0;
			}
			if(s[i]<0){
				bak=1;
				s[i]+=10;
			}
		}
		if(bak){
			minus=1;
			for(int i=0;i<10004;i++) swap(a[i],b[i]);
			memset(s,0,10004);
			goto again;
		}
	}
	if(minus) cout<<"-";
	bool leadzero=1;
	for(int i=0;i<10004;i++){
		while(s[i]==0&&leadzero==1){
			i++;
			if(i>=10004) break;
		}
		if(i>=10004) break;
		leadzero=0;
		cout<<s[i];
	}
	if(leadzero) cout<<0;
	cout<<endl;
	
}
