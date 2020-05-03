#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>str;
	while(str.length()>1){
		ll prod=1;
		for(int i=0;i<str.length();i++){
			if(str.at(i)!='0') prod*=str.at(i)-'0';
		}
		cout<<str<<" "<<prod<<endl;
		str.clear();
		str+=to_string(prod);
	}
}

