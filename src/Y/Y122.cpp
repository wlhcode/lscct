#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin>>n){
		while(n>=1000){
			cout<<"M";
			n-=1000;
		}
		if(n>=900){
			cout<<"CM";
			n-=900;
		}
		while(n>=500){
			cout<<"D";
			n-=500;
		}
		if(n>=400){
			cout<<"CD";
			n-=400;
		}
		while(n>=100){
			cout<<"C";
			n-=100;
		}
		if(n>=90){
			cout<<"XC";
			n-=90;
		}
		while(n>=50){
			cout<<"L";
			n-=50;
		}
		if(n>=40){
			cout<<"XL";
			n-=40;
		}
		while(n>=10){
			cout<<"X";
			n-=10;
		}
		if(n>=9){
			cout<<"IX";
			n-=9;
		}
		while(n>=5){
			cout<<"V";
			n-=5;
		}
		if(n>=4){
			cout<<"IV";
			n-=4;
		}
		while(n>=1){
			cout<<"I";
			n--;
		}
		cout<<endl;
	}
	return 0;
}

