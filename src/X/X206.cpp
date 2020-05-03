#include<bits/stdc++.h>
using namespace std;
string gue[10];
string tmd[10];
int alc[10];
int col[10];
int cnt=0,n;
string delcolor(string q){
	for(int i=0;i<q.length();i++){
		if(q[i]=='R') q[i]='1';
		if(q[i]=='G') q[i]='2';
		if(q[i]=='B') q[i]='3';
		if(q[i]=='Y') q[i]='4';
		if(q[i]=='O') q[i]='5';
		if(q[i]=='P') q[i]='6';
	}
	return q;
}
string addcolor(string q){
	for(int i=0;i<q.length();i++){
		if(q[i]=='1') q[i]='R';
		if(q[i]=='2') q[i]='G';
		if(q[i]=='3') q[i]='B';
		if(q[i]=='4') q[i]='Y';
		if(q[i]=='5') q[i]='O';
		if(q[i]=='6') q[i]='P';
	}
	return q;
}
bool repeat(string q,char b){
	for(int i=0;i<q.length();i++){
		if(q[i]==b) return 1;
	}
	return 0;
}
//void prt(int a,int b){
//	cout<<a<<" "<<b<<" ";
//}
bool check(string q){
	for(int i=0;i<n;i++){
		int cor=0,cer=0;
		for(int j=0;j<4;j++){
			if(gue[i].at(j)==q[j]) cor++;
			else if(repeat(q,gue[i].at(j))) cer++;
		}
//		prt(cor,cer);
		if(cor!=alc[i]||cer!=col[i]) return 0;
	}
	return 1;
}
void nobitch(string q){
	if(q.length()==4){
		if(check(q)){
			tmd[cnt]=addcolor(q);
//			cout<<tmd[cnt]<<endl;
			cnt++;
		}
		if(cnt>=2){
			cout<<"Not yet defined"<<endl;
			exit(0);
		}
		return;
	}
	for(char i='1';i<='6';i++){
		if(repeat(q,i)&&i<='6') continue;
		if(i>'6') break;
		nobitch(q+string(1,i));
	}
	return;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>gue[i]>>alc[i]>>col[i];
		gue[i]=delcolor(gue[i]);
//		cout<<gue[i]<<endl;
	}
	for(char i='1';i<='6';i++) nobitch(string(1,i));
	if(cnt==0) cout<<"No solution"<<endl;
	else cout<<tmd[0]<<endl;
}
