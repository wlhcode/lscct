#include<bits/stdc++.h>
using namespace std;
char b[20];
int main(){
	int a,x=0,s=1;
	cin>>a;
	cin>>b;
	for(int i=0;b[i]!='H';i++){
		s++;
		if(b[i]=='X') x+=2;
	}
	cout<<(s*2+x<=a?"YES - Total time is ":"NO - Total time is ")<<s*2+x<<endl;
}
