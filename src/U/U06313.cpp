#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,c10=0,c2=0;
	cin>>n;
	s.clear();
	s+=to_string(n);
	for(int i=s.length()-1;s.at(i)=='0';i--) c10++;
	while(n%2==0){
		c2++;
		n/=2;
	}
	cout<<c10<<" "<<c2<<endl;
	return 0;
}

