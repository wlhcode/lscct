#include<bits/stdc++.h>
using namespace std;
char s[20];
main(){
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>s; 
	int n=0,b; 
	for(int i=0;i<10;i++){ 
		if(s[i]=='X') n+=10; 
		else if(s[i]=='?') b=10-i; 
		else n+=(10-i)*(s[i]-'0');
	} 
	int q=11-n%11;
	if(q==11) q=0;
	if(b==1&&q==10){ 
		cout<<"X"<<endl; 
		return 0; 
	} 
	for(int i=0;i<=9;i++){ 
		if(b*i%11==q){ 
			cout<<i<<endl; 
			return 0; 
		}
	} 
	cout<<-1<<endl; 
}
