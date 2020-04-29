#include<bits/stdc++.h>
using namespace std;
string s[100];

void space(int a){
	for(int i=0;i<a;i++) cout<<" ";
}

int main(){
	int len=0,i=0;
	while(cin>>s[i]){
		if(s[i].length()>len) len=s[i].length();
		i++;
	}
	for(int j=0;j<i;j++){
		space((len-s[j].length())/2);
		cout<<s[j]<<endl;
	}
}
