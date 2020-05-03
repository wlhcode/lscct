#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double q=0;
	for(int i=1;i<=1000000;i++){
		q+=log10(i);
		arr[i]=floor(q)+1;
	}
	while(cin>>n) cout<<arr[n]<<endl;
	return 0;
}

