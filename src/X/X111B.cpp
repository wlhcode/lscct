#include<bits/stdc++.h>
using namespace std;
char a[10];
int n;
bool valid(char b,string q){
	int c=0,d=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==b) c++;
	}
	for(int i=0;i<q.length();i++){
		if(q[i]==b) d++;
	}
	return c>d?1:0;
}
void recursion(string s){
	if(s.length()>=n){
		cout<<s<<endl;
		return;
	}
	for(int i=0;i<strlen(a);i++){
		if(valid(a[i],s)&&(i==0||a[i]!=a[i-1])){
			recursion(s+string(1,a[i]));
		}
	}
}
int main(){
	cin>>n>>a;
	sort(a,a+strlen(a));
	for(int i=0;i<strlen(a);i++){
		if(i==0||a[i]!=a[i-1]) recursion(string(1,a[i]));
	}
}
