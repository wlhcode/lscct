#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<max(a,b)+2;i++){
		if(i<a+2){
			if(i%(a+1)==0){
				cout<<"+";
				for(int j=0;j<a;j++) cout<<"--";
				cout<<"-+";
			}
			else{
				cout<<"I";
				for(int j=0;j<a;j++) cout<<"-X";
				cout<<"-I";
			}
		}
		else{
			for(int j=0;j<2*a+3;j++) cout<<" ";
		}
		if(i<b+2){
			cout<<"   ";
			if(i%(b+1)==0){
				cout<<"+";
				for(int j=0;j<b;j++) cout<<"--";
				cout<<"-+";
			}
			else{
				cout<<"I";
				for(int j=0;j<b;j++) cout<<"-X";
				cout<<"-I";
			}
		}
		cout<<endl;
	}
	return 0;
}

