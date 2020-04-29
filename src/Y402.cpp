#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll arr[205];
ll sum[102];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n*2;i++) cin>>arr[i];
	for(int i=0;i<n*2;i+=2){
		sum[i/2]=arr[i]*arr[i]+arr[i+1]*arr[i+1];
	}stable_sort(sum,sum+n);
	for(int i=0;i<n;i++){
		for(int j=0;i<n*2;j+=2){
			if(arr[j]*arr[j]+arr[j+1]*arr[j+1]==sum[i]){
				cout<<arr[j]<<" "<<arr[j+1]<<endl;
				arr[j]=0;
				arr[j+1]=0;
				break;
			}
		}
	}
	return 0;
}
