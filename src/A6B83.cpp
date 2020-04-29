#include<iostream>
using namespace std;
int arr[201];
int main(){
	int a;
	cin>>a;
	for(int i=0;i<2*a;i++) cin>>arr[i];
	for(int i=1;i<=a;i++){
		cout<<"Case "<<i<<": ";
		int sum=0;
		if(arr[2*i-2]%2==1){
			for(int j=arr[2*i-2];j<=arr[2*i-1];j+=2){
				sum+=j;
			}
		}else if(arr[2*i-2]%2==0){
			for(int j=arr[2*i-2]+1;j<=arr[2*i-1];j+=2){
				sum+=j;
			}
		}
		cout<<sum<<endl;
	}return 0;
}
