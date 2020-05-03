#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	if(n==4) cout<<"4"<<endl;
	else if(n==7) cout<<"7"<<endl;
	else if(n==8) cout<<"44"<<endl;
	else if(n==11) cout<<"47"<<endl;
	else if(n==12) cout<<"444"<<endl;
	else if(n==14) cout<<"77"<<endl;
	else if(n==15) cout<<"447"<<endl;
	else if(n==16) cout<<"4444"<<endl;
	//else if(n==18) cout<<"477"<<endl;
	else if(n>=18){
		if(n%7==0){
			for(int i=0;i<n/7;i++) cout<<"7";
			cout<<endl; 
		}
		else{
			while(n%7!=0){
				cout<<"4";
				n-=4;
			}
			for(int i=0;i<n/7;i++) cout<<"7";
			cout<<endl;
		}
	}
	else cout<<"-1"<<endl;
	return 0;
}

/*
19: 4447
20: 44444
21: 777
22: 4477
23: 44447
24: 444444
*/
