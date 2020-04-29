#include<iostream>
using namespace std;
char c;
void rec(string s){
	if(s[s.length()-1]==c){
		cout<<s<<endl;
		return;
	}
	for(char i=s[s.length()-1]+1;i<=c;i++){
		if(5*int(s[s.length()-1]-'A'+1)<=4*int(i-'A'+1)) rec(s+i);
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c;
	for(char i='A';i<c;i++){
		string s;
		s+=i;
		rec(s);
	}
	return 0;
}
