#include<bits/stdc++.h>
#define ll long long
ll arr[35000];	
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	double mean=0,median;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		mean+=arr[i];
	}
	mean/=n;
	cout<<setprecision(3)<<fixed<<mean<<endl;
	sort(arr,arr+n);
	double L=ceil((double(n)-1)/2),R=floor((double(n)-1)/2);
	//cout<<L<<" "<<R<<endl;
	median=(double(arr[(int)L])+double(arr[(int)R]))/2;
	int medtest=floor(median);
	if(medtest==median) cout<<setprecision(0)<<fixed<<median<<endl;
	else cout<<setprecision(1)<<fixed<<median<<endl;
	int appcount=1,max=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]) appcount++;
		else appcount=1;
		if(appcount>max) max=appcount;
	}
	appcount=1;
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]) appcount++;
		else appcount=1;
		if(appcount>=max){
			cout<<arr[i]<<endl;
			return 0;
		}
	}
	if(n==1) cout<<arr[0]<<endl;
	return 0;
}

