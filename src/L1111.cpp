#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	int m=sqrt(n);
	if(n==1) return false;
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int prod,n,a,b;
	cin>>n;
	if(n%2==1){
		if(prime(n)){
			cout<<(n+1)/2<<" "<<(n+1)/2-1<<endl;
			return 0;
		}
		else{
			for(int i=int(double(sqrt(n)+1));i<=n;i++){
				if(n%i==0){
//					cout<<i<<" "<<n/i<<endl;
					a=(i+n/i)/2;
					b=(i-n/i)/2;
					if(b==0) break;
					cout<<a<<" "<<b<<endl;
					return 0;
				}
			}
		}
//		0 1 2 3 4 5  6  7  8  9  10
//		 1 3 5 7 9 11 13 15 17 19
	}
	else{
		for(int i=int(double(sqrt(n))+1);i<=n;i++){
//			cout<<i<<" "<<n/i<<endl;
			if(n%i==0&&(i-n/i)%2==0){
//				cout<<i<<" "<<n/i<<endl;
				a=(i+n/i)/2;
				b=(i-n/i)/2;
				if(b==0) break;
				cout<<a<<" "<<b<<endl;
				return 0;
			}
		}
	}
	cout<<"No solution"<<endl;
	return 0;
}

