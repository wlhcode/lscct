#include<bits/stdc++.h>
using namespace std;
char sum[30];
char a[30];
char b[30];
bool no2(){
	int len=strlen(sum);
	for(int i=0;i<len;i++){
		if(a[i]=='2') return false;
	}
	for(int i=0;i<len;i++){
		if(b[i]=='2') return false;
	}
	return true;
}
int main(){
	cin>>sum;
	int len=strlen(sum);
	for(int i=0;i<len;i++){
		a[i]='0';
		b[i]=sum[i];
	}
	//cout<<no2()<<endl;
	while(!no2()){
		for(int i=len-1;i>=0;i--){
			if(a[i]=='2'||b[i]=='2'){
				b[i]--;
				a[i]++;
			}
		}
		for(int i=len-1;i>=0;i--){
			if(a[i]>'9'){
				a[i]='0';
				a[i-1]++;
			}
			if(b[i]>'9'){
				b[i]='0';
				b[i-1]++;
			}
			if(a[i]<'0'){
				a[i]='9';
				a[i-1]--;
			}
			if(b[i]<'0'){
				b[i]='9';
				b[i-1]--;
			}
		}
	}
	bool trspace=true;
	for(int i=0;i<len;i++){
		if(a[i]!='0') trspace=false;
		if(!trspace) cout<<a[i];
	}
	cout<<" ";
	trspace=true;
	for(int i=0;i<len;i++){
		if(b[i]!='0') trspace=false;
		if(!trspace) cout<<b[i];
	}
	cout<<endl;
	return 0;
}	
