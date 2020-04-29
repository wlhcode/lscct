#include<bits/stdc++.h>
using namespace std;
string s;
bool used[15];
int main(){
	memset(used,0,10);
	int count=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(count==6) break; 
		if(s.at(i)>='0'&&s.at(i)<='9'&&!used[s.at(i)-'0']){
			cout<<s.at(i);
			used[s.at(i)-'0']=1;
			count++;
		}
	}
	cout<<endl;
}
