#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string s[50];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int last=0;
	while(getline(cin,s[last])){
		if(s[last]=="SCHOOL") break;
		last++;
	}
	for(int i=last-1;i>=0;i--){
		if(i%2==0){
			cout<<"Turn ";
			if(s[i]=="L") cout<<"RIGHT ";
			else cout<<"LEFT ";
		}
		else{
			cout<<"onto "<<s[i]<<" street."<<endl;
		}
	}
	cout<<"into your HOME."<<endl;
	return 0;
}

