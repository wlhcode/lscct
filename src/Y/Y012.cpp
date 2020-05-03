#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	stack<int> s;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]<='9'&&a[i]>='0') s.push(a[i]-'0');
		else{
			int c,b;
			b=s.top();
			s.pop();
			c=s.top();
			s.pop();
			if(a[i]=='+') s.push(c+b);
			else if(a[i]=='-') s.push(c-b);
			else if(a[i]=='*') s.push(c*b);
			else s.push(c/b);
		}
	}
	cout<<s.top()<<endl;
}
