#include<bits/stdc++.h>
#define ll long long
using namespace std;
char s[30000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin.getline(s,sizeof(s));
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(i==0||i==len-1||s[i+1]==' '||s[i-1]==' ') cout<<s[i];
		else if(s[i]==' ') cout<<" ";
		else{
			int ind=i;
			for(int j=i;j<len-1;j++){
				if(s[j]==' '){
					ind=j-2;
					break;
				}
				else if(j==len-2){
					ind=j;
					//cout<<ind<<endl;
					break;
				}
			}
			for(int j=ind;j>=i;j--) cout<<s[j];
			i=ind;
		}
	}
	cout<<endl;
	return 0;
}

