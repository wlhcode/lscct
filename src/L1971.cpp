#include<bits/stdc++.h>
using namespace std;
#define ll long long
string h,k,o,i,t;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int len,req;
	int pos;
	char re;
	cin>>len>>req;
	for(int s=0;s<=1400;s++){
		h+='.';
		k+='.';
		o+='.';
		i+='.';
	}
	for(int s=1;s<=req;s++){
		cin>>pos>>re;
		h[pos]=re;
		k[pos]=h[pos];
		o[pos]=k[pos];
		i[pos]=o[pos];
	}
	int u=1;
	for(int s=1;s<=len;s++){
		if(h[s]!='.') continue;
		if(u%4==1){
			h[s]='H';
			k[s]='K';
			o[s]='O';
			i[s]='I';
			u++;
		}
		else if(u%4==2){
			i[s]='H';
			h[s]='K';
			k[s]='O';
			o[s]='I';
			u++;
		}
		else if(u%4==3){
			o[s]='H';
			i[s]='K';
			h[s]='O';
			k[s]='I';
			u++;
		}
		else if(u%4==0){
			k[s]='H';
			o[s]='K';
			i[s]='O';
			h[s]='I';
			u++;
		}
	}
	int maxh=0,maxk=0,maxo=0,maxi=0;
	for(int s=1;s<=len-3;s++){
		t.clear();
		for(int q=s;q<=s+3;q++) t+=h.at(q);
		if(t=="HKOI"||t=="KOIH"||t=="OIHK"||t=="IHKO") maxh++;
		t.clear();
		for(int q=s;q<=s+3;q++) t+=k.at(q);
		if(t=="HKOI"||t=="KOIH"||t=="OIHK"||t=="IHKO") maxk++;
		t.clear();
		for(int q=s;q<=s+3;q++) t+=o.at(q);
		if(t=="HKOI"||t=="KOIH"||t=="OIHK"||t=="IHKO") maxo++;
		t.clear();
		for(int q=s;q<=s+3;q++) t+=i.at(q);
		if(t=="HKOI"||t=="KOIH"||t=="OIHK"||t=="IHKO") maxi++;
	}
//	cout<<h<<endl<<k<<endl<<o<<endl<<i<<endl;
	cout<<max(maxh,max(maxk,max(maxo,maxi)))<<endl;
}
