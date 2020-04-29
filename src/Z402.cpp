#include<bits/stdc++.h>
#define ll long long
#define ld long double
int arr[10];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>arr[1]>>arr[3]>>arr[5];
	for(int i=1;i<=6;i+=2){
		arr[i+1]=arr[i]%10;
		arr[i]/=10;
	}
	for(int i=3;i>=0;i--){
		for(int j=1;j<=6;j++){
			if(arr[j]>=pow(2,i)){
				cout<<"*";
				arr[j]-=pow(2,i);
			}
			else cout<<"o";
		}
		cout<<endl;
	}
	return 0;
}

