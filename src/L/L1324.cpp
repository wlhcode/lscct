#include<bits/stdc++.h>
#define ll double
using namespace std;
ll arr[10];
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
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	sort(arr,arr+4);
	cout<<setprecision(2)<<fixed;
	cout<<"Winnie Da Jus: "<<arr[3]<<" mL"<<endl;
	cout<<"Twen: "<<arr[0]<<" mL"<<endl;
	cout<<"Tyni: "<<arr[1]<<" mL"<<endl;
	cout<<"Ne: "<<arr[2]<<" mL"<<endl;
	return 0;
}

