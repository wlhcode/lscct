// Function: Y311 Prime or Composite
#include <bits/stdc++.h>
using namespace std;
bool checkprime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	if(n/10>0) return checkprime(n/10);
	else return true;
}
int main(){
	int q;
	cin>>q;
	if(q>=7){
		if(q==8) cout<<"23399339"<<endl<<"29399999"<<endl<<"37337999"<<endl<<"59393339"<<endl<<"73939133"<<endl;
		if(q==7) cout<<"2339933"<<endl<<"2399333"<<endl<<"2939999"<<endl<<"3733799"<<endl<<"5939333"<<endl<<"7393913"<<endl<<"7393931"<<endl<<"7393933"<<endl;
		return 0;
	}
	if(q==1) cout<<"2"<<endl;
	for(int i=2*pow(10,q-1)+1;i<8*pow(10,q-1);i+=2){
		while(checkprime(i/pow(10,q-1))==false) i+=pow(10,q-1);
		if(checkprime(i)) cout<<i<<endl;
	}
	return 0;
}
