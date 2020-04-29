#include<iostream>
#define ll long long
using namespace std;
ll arr[1200];
ll gcd(ll a,ll b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	ll i=0,s;
	while(cin>>s){
		//cout<<s;
		arr[i]=s;
		if(i>=1){
			arr[i]=gcd(arr[i],arr[i-1]);
			arr[i]=s*arr[i-1]/arr[i];
		}
		//cout<<arr[i];
		i++;
	}
	cout<<arr[i-1]<<endl;
	return 0;
}

