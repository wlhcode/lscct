#include<bits/stdc++.h>
#define ll long long
using namespace std;
char s[150];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	cin.getline(s,sizeof(s));
	for(int i=1;i<=n;i++){
		cin.getline(s,sizeof(s));
		cout<<"Case #"<<i<<": ";
		int len=strlen(s);
		for(int j=0;j<len;j++){
			if(s[j]=='y') cout<<"a";
			if(s[j]=='n') cout<<"b";
			if(s[j]=='f') cout<<"c";
			if(s[j]=='i') cout<<"d";
			if(s[j]=='c') cout<<"e";
			if(s[j]=='w') cout<<"f";
			if(s[j]=='l') cout<<"g";
			if(s[j]=='b') cout<<"h";
			if(s[j]=='k') cout<<"i";
			if(s[j]=='u') cout<<"j";
			if(s[j]=='o') cout<<"k";
			if(s[j]=='m') cout<<"l";
			if(s[j]=='x') cout<<"m";
			if(s[j]=='s') cout<<"n";
			if(s[j]=='e') cout<<"o";
			if(s[j]=='v') cout<<"p";
			if(s[j]=='z') cout<<"q";
			if(s[j]=='p') cout<<"r";
			if(s[j]=='d') cout<<"s";
			if(s[j]=='r') cout<<"t";
			if(s[j]=='j') cout<<"u";
			if(s[j]=='g') cout<<"v";
			if(s[j]=='t') cout<<"w";
			if(s[j]=='h') cout<<"x";
			if(s[j]=='a') cout<<"y";
			if(s[j]=='q') cout<<"z";
			if(s[j]==' ') cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
