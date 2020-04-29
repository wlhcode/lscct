#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string str;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str.at(i)=='.'&&str.at(i-1)>='0'&&str.at(i-1)<='9'){
			str.erase(i-1,1);
			cout<<str<<endl;
			return 0;
		}
	}
	cout<<"OK"<<endl;
}

