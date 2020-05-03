#include<bits/stdc++.h>
using namespace std;
int arr[60];
int n;
int lmi(){
	int smallno=INT_MIN,index;
	for(int i=0;i<n;i++){
		if(arr[i]>smallno){
			smallno=arr[i];
			index=i;
		}
	}
	return index;
}
int main(){
	int t=0,q;
	cin>>n;
	q=n;
	string c;
	for(int i=0;i<n;i++){
		cin>>c;
		if(c[1]>='2'&&c[1]<='9') arr[i]=(c[1]-'0')*10;
		else if(c[1]=='T') arr[i]=100;
		else if(c[1]=='J') arr[i]=110;
		else if(c[1]=='Q') arr[i]=120;
		else if(c[1]=='K') arr[i]=130;
		else if(c[1]=='A') arr[i]=140;
		if(c[0]=='D') arr[i]+=1;
		else if(c[0]=='C') arr[i]+=2;
		else if(c[0]=='H') arr[i]+=3;
		else if(c[0]=='S') arr[i]+=4;
	}
	while(q>0){
		int k=lmi();
		while(k==lmi()){
			arr[k]=INT_MIN;
//			cout<<k<<endl;
			while(arr[k]==INT_MIN) k++;
			q--;
		}
		t++;
	}
	cout<<t<<endl;
}
