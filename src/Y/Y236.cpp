#include<bits/stdc++.h>
#define ll long long
int arr[30][30];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int k=0;k<=n;k++){
		for(int i=k;i<2*n+1;i++){
			for(int j=abs(n-i)+k;j<=2*n-abs(n-i)-k;j++){
				arr[i][j]=1+k;
			}
		}
	}
	
	for(int i=0;i<2*n+1;i++){
		for(int j=0;j<2*n+1;j++){
			if(arr[i][j]!=0){
				cout<<arr[i][j]-1;
				if(arr[i][j+1]!=0) cout<<" ";
				else break;
			}
			else cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
