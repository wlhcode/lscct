#include<bits/stdc++.h>
using namespace std;
int clb[500][5];
int joi[500];
int main(){
	int clbn,join,culn=0,spon=0,fee=0;
	cin>>clbn;
	for(int i=0;i<clbn;i++) cin>>clb[i][0]>>clb[i][1];
	cin>>join;
	for(int i=0;i<join;i++){
		cin>>joi[i];
		if(joi[i]/100==1) culn++;
		else if(joi[i]/100==2) spon++;
		for(int j=0;j<clbn;j++){
			if(joi[i]==clb[j][0]){
				fee+=clb[j][1];
				break;
			}
		}
	}
	
	bool rej=0;
	if(join<3){
		cout<<"Too few clubs joined"<<endl;
		rej=1;
	}
	else if(join>5){
		cout<<"Too many clubs joined"<<endl;
		rej=1;
	}
	
	if(culn<=0){
		cout<<"No cultural club joined"<<endl;
		rej=1;
	}
	if(spon<=0){
		cout<<"No sports club joined"<<endl;
		rej=1;
	}
	
	if(!rej) cout<<fee<<endl;
}
