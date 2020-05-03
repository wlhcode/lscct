#include<iostream>
using namespace std;
int arr[2005][2];
int main(){
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>arr[i][0]>>arr[i][1];
		sum+=arr[i][0]*arr[i][1];
	}if(n>=sum) cout<<"Money left: $"<<n-sum<<endl;
	else cout<<"Not enough money"<<endl;
	return 0;
}
