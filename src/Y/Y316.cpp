#include<bits/stdc++.h>
using namespace std;
string s;
bool prime(int n){ 	 	
	int m = sqrt(n);
	for (int i = 2; i <= m; i++) { 
		if (n % i == 0) { 						
			return false;		
		} 	
	}
	if(n==1) return false;
	return true; 
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n,p;
	cin>>m>>n>>p;
	for(int i=m;i<=n;i++){
		if(prime(i)){
			int sum=0;
			s.clear();
			s+=to_string(i);
			for(int j=0;j<s.length();j++) sum+=s.at(j)-'0';
			if(sum==p) cout<<i<<endl;
		}
	}
	cout<<"Finish!"<<endl;
	return 0;
}
