#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string f;
string s;
int main(){
	cout<<"Enter first phrase> ";
	getline(cin,f);
	cout<<"Enter second phrase> ";
	getline(cin,s);
	for(int i=0;i<f.length();i++){
		if(f.at(i)==' ') f.erase(i,1);
	}
	for(int i=0;i<s.length();i++){
		if(s.at(i)==' ') s.erase(i,1);
	}
//	cout<<f<<endl<<s<<endl;
	for(int i=0;i<s.length();i++){
		for(int j=0;j<f.length();j++){
			if(f.at(j)==s.at(i)){
				f.erase(j,1);
				s.erase(i,1);
				i--;
				break;
			}
		}
	}
	if(f.empty()&&s.empty()) cout<<"Is an anagram."<<endl;
	else cout<<"Is not an anagram."<<endl;
	return 0;
}

