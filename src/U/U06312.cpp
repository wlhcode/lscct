#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s1[85];
	char s2[85];
	gets(s1);
	gets(s2);
	int t=strlen(s1);
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]==' ') t--;
	}
	cout<<t<<endl;
	if(strlen(s1)!=strlen(s2)){
		cout<<"n"<<endl;
		return 0;
	}
	else{
		for(int i=0;i<strlen(s1);i++){
			for(int j=0;j<strlen(s2);j++){
				if(s1[i]==s2[j]){
					s2[j]='#';
					break;
				}
				else if(j+1==strlen(s2)){
					cout<<"n"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"y"<<endl;
	return 0;
}

