#include<bits/stdc++.h>
using namespace std;
char enc[100][10];
string key,targ;
int main(){
	getline(cin,key);
	getline(cin,targ);
	for(int i=0;i<key.length();i++){
		if(key.at(i)<'A'||key.at(i)>'Z'){
			key.erase(i,1);
			i--;
		}
	}
	for(int i=0;i<targ.length();i++){
		if(targ.at(i)<'A'||targ.at(i)>'Z'){
			targ.erase(i,1);
			i--;
		}
	}
	for(int i=0;i<targ.length();i++){
		char q=targ.at(i)+key.at(i%key.length())-'A';
		if(q>'Z') q-=26;
		cout<<q;
	}
	cout<<endl;
}
