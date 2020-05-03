#include<bits/stdc++.h>
using namespace std;
char a[10];
int n;
void recursion(string q){
	if(q.length()>=n){
		cout<<q<<endl;
		return;
	}
	for(int i=0;i<strlen(a);i++){
		bool test=1;
		for(int j=0;j<q.length();j++){
			if(a[i]==q[j]){
				test=0;
				break;
			}
		}
		if(test) recursion(q+string(1,a[i]));
	}
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>a;
	sort(a,a+strlen(a));
//	cout<<a<<endl;
	for(int i=0;i<strlen(a)/2;i++) swap(a[i],a[strlen(a)-1-i]);
//	cout<<a<<endl;
	for(int i=0;i<strlen(a);i++) recursion(string(1,a[i]));
}

