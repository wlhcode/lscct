#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,o;
	cin>>n;
	for(int i=1;i<=n;i++) arr[i]=0;
	for(int i=1;i<=n;i++){
		cin>>o;
		int v=(i-o+1)%n;
		if(v<=0) v=n+v;
		arr[v]++;
	}
	int f,sf=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>sf){
			f=i;
			sf=arr[i];
		}
	}
	cout<<f<<endl;
	return 0;
}

