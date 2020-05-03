#include<bits/stdc++.h>
#define ll long long
int arr[5000];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]<0100) cout<<"12"<<":"<<setfill('0')<<setw(2)<<arr[i]%100<<" AM"<<endl;
		else if(arr[i]<1200) cout<<arr[i]/100<<":"<<setfill('0')<<setw(2)<<arr[i]%100<<" AM"<<endl;
		else if(arr[i]>1259) cout<<arr[i]/100-12<<":"<<setfill('0')<<setw(2)<<arr[i]%100<<" PM"<<endl;
		else cout<<arr[i]/100<<":"<<setfill('0')<<setw(2)<<arr[i]%100<<" PM"<<endl;
	}
	return 0;
}

