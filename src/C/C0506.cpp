#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string s;
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s.at(i)=='-'){
				s.erase(i,1);
				i--;
			}
			if(i==3||i==7) s.insert(i,1,'-');
		}
		for(int i=0;i<12;i++){
			if((s.at(i)>='a'&&s.at(i)<='z')||(s.at(i)>='A'&&s.at(i)<='Z')) s.at(i)=toupper(s.at(i));
			if(s.at(i)>='A'&&s.at(i)<='Z'){
				if(s.at(i)<='C') cout<<2;
				else if(s.at(i)<='F') cout<<3;
				else if(s.at(i)<='I') cout<<4;
				else if(s.at(i)<='L') cout<<5;
				else if(s.at(i)<='O') cout<<6;
				else if(s.at(i)<='S') cout<<7;
				else if(s.at(i)<='V') cout<<8;
				else cout<<9;
			}
			else cout<<s.at(i);
		}
		cout<<endl;
	}
	return 0;
}

