#include<bits/stdc++.h>
using namespace std;
string str;
int dp[5];
int counta(char a,int l,int r){
	int count=0;
	for(int i=l;i<=r;i++){
		if(str.at(i)==a) count++;
	}
	return count;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cin>>str;
	int len=str.length();
	memset(dp,0,3);
	dp[1]=counta('3',0,str.length()-1);
	int count=min(dp[1],len-dp[1]);
	
	for(int i=0;i<str.length();i++){
		if(str.at(i)=='3') dp[1]--;
		else dp[0]++;
		count=min(count,dp[0]+dp[1]);
	}
	
	cout<<count<<endl;
}

/*
3 1 3
0 0
0 2
1 2
1 1
*/
