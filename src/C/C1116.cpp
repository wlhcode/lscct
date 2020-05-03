#include<bits/stdc++.h>
using namespace std;
int arr[500];
int pr[500];
bool prime(int n){ 	 	
	int m = sqrt(n);
	for (int i = 2; i <= m; i++) { 		
		if (n % i == 0) { 						
			return false;		
		} 	
	} 	
	return true; 
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int tmp=0;
	for(int i=0;i<n;i++){
		if(prime(arr[i])){
			pr[tmp]=arr[i];
			tmp++;
		}
	}
	for(int i=0;i<tmp;i++){
		cout<<pr[i];
		if(i+1<tmp) cout<<" ";
	}
	cout<<endl;
	return 0;
}
