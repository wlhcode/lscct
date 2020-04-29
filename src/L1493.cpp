#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string o,n,t;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>o>>n;
	if(o.length()==n.length()){
		for(int j=o.length()-1;j>=0;j--){
			if(o.at(j)!=n.at(j)){
				cout<<"Change the ";
				cout<<pow(10,o.length()-j-1);
				cout<<" digit to ";
				cout<<n.at(j)<<"."<<endl;
				return 0;
			}
		}
	}
	if(o.length()>n.length()){
		for(int i=0;i<o.length();i++){
			t=o;
			t.erase(i,1);
			if(t==n){
				cout<<"Delete the ";
				cout<<pow(10,o.length()-i-1);
				cout<<" digit."<<endl; 
			}
		}
	}
	else{
		for(int i=0;i<=1;i++){
			t=n;
			t.erase((n.length()-1)*i,1);
			if(t==o) cout<<"Add "<<n.at((n.length()-1)*i)<<" to the "<<(i==0?"left.":"right.")<<endl;
		}
	}
}

