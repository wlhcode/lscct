#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=0;j<a;j++){
			if(j!=0) cout<<j;
			cout<<i;
			if(j+1<a) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
