#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int twin_1=3,twin_2,count=0;
	while(count<n){
		if(prime(twin_1)){
			twin_2=twin_1+2;
			if(prime(twin_2)) count++;
		}
		twin_1+=2;
	}
	cout<<twin_1-2<<" "<<twin_2<<endl;
}

