#include<bits/stdc++.h>
using namespace std;
char s[15];
void recursion(string q,int index){
	if(q.length()==strlen(s)){
		cout<<q<<endl;
		return;
	}
	for(int i=index;i<strlen(s);i++) recursion(q+string(1,s[i]),i);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	sort(s,s+strlen(s));
	for(int i=0;i<strlen(s);i++) recursion(string(1,s[i]),i);
}
