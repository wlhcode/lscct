#include<iostream>
#include<cmath>
using namespace std;
int p[500005]={0};

void organize(){
	p[0]=2;
	for(int i=3;i<=1000000;i+=2) p[i/2]=i;
	for(int i=1;i<=1010;i++){
		if(p[i]!=-1){
			for(int j=i+2*i+1;j<=500002;j+=(2*i+1)) p[j]=-1;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	organize();
	int n;
	cin>>n;
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	for(int i=0;n!=1;i++){
		while(p[i]<2) i++;
		while(n%p[i]==0){
			n/=p[i];
			cout<<p[i];
			if(n!=1) cout<<" ";
		}
		if(p[i]>=pow(n,0.5)+10){
			cout<<n<<endl;
			return 0;
		} 
	}
	/*for(int i=1000003;n!=1;i+=2){
		while(n%i==0){
			n/=i;
			cout<<i;
			if(n!=1) cout<<" ";
		}
	}*/
	cout<<endl;
	return 0;
}
