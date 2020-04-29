#include<bits/stdc++.h>
#define ld long double
using namespace std;
string q; 
int l=0,s=0,c=0,i=0;
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>q;
	int l=0,s=0,c=0,m=0;
	while(i<q.length()){
		while(i<q.length()&&q.at(i)!='L') i++;
		if(i>=q.length()) break;
		while(i<q.length()&&q.at(i)=='L'){
			l++;
			i++;
		}
		if(i>=q.length()) break;
		while(i<q.length()&&q.at(i)=='S'){
			s++;
			i++; 
		}
		if(i>=q.length()) break;
		while(i<q.length()&&q.at(i)=='C'){
			c++;
			i++;
		}
		s<=l&&s<=c?m=max(m,s*3):m=m;
		l=0;s=0;c=0; 
	}
	cout<<m<<endl;
}

