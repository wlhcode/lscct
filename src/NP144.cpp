#include<iostream>
using namespace std;
int ac[205];
int bc[205];

int rpsls(int a,int b){
	if(a==b) return 0; 
	else if(a==0){
		if(b==1) return 2;
		if(b==2) return 1;
		if(b==3) return 1;
		if(b==4) return 2;
	}
	else if(a==1){
		if(b==0) return 1;
		if(b==2) return 2;
		if(b==3) return 1;
		if(b==4) return 2;
	}
	else if(a==2){
		if(b==0) return 2;
		if(b==1) return 1;
		if(b==3) return 2;
		if(b==4) return 1;
	}
	else if(a==3){
		if(b==0) return 2;
		if(b==1) return 2;
		if(b==2) return 1;
		if(b==4) return 1;
	}
	else if(a==4){
		if(b==0) return 1;
		if(b==1) return 1;
		if(b==2) return 2;
		if(b==3) return 2;
	}
} 

int main(){
	int n,a,b,ap=0,bp=0;
	cin>>n>>a>>b;
	for(int i=0;i<a;i++) cin>>ac[i];
	for(int i=0;i<b;i++) cin>>bc[i];
	for(int i=a;i<n;i++) ac[i]=ac[i-a];
	for(int i=b;i<n;i++) bc[i]=bc[i-b];
	for(int i=0;i<n;i++){
		if(rpsls(ac[i],bc[i])==1) ap++;
		else if(rpsls(ac[i],bc[i])==2) bp++;
	}
	cout<<ap<<" "<<bp<<endl;
	return 0;
}
