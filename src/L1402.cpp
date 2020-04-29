#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string m1="Hello!";
	string m2="How are you?";
	string m3="Moo...";
	string m4="Adieu";
	string m5="Get well soon";
	string in;
	getline(cin,in);
	if(in=="1") cout<<m1;
	if(in=="2") cout<<m2;
	if(in=="3") cout<<m3;
	if(in=="4") cout<<m4;
	if(in=="5") cout<<m5;
	if(in==m1) cout<<"1";
	if(in==m2) cout<<"2";
	if(in==m3) cout<<"3";
	if(in==m4) cout<<"4";
	if(in==m5) cout<<"5";
	cout<<endl;
	return 0;
}

