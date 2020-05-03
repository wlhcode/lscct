#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,d,s;
	cin>>a>>b>>c>>d>>s;
	int nikky=0,byron=0;
	bool forward=true;
	for(int i=0;i<s;){
		if(forward){
			nikky+=min(s-i,a);
			i+=min(s-i,a);
			forward=false;
		}
		else{
			nikky-=min(s-i,b);
			i+=min(s-i,b);
			forward=true;
		}
		//cout<<nikky<<" ";
	}
	//cout<<endl;
	forward=true;
	for(int i=0;i<s;){
		if(forward){
			byron+=min(s-i,c);
			i+=min(s-i,c);
			forward=false;
		}
		else{
			byron-=min(s-i,d);
			i+=min(s-i,d);
			forward=true;
		}
		//cout<<byron<<" ";
	}
	//cout<<endl;
	//cout<<nikky<<" "<<byron<<endl;
	if(nikky>byron) cout<<"Nikky"<<endl;
	else if(nikky<byron) cout<<"Byron"<<endl;
	else cout<<"Tied"<<endl;
	return 0;
}

