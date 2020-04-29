#include<iostream>
char s[100005];
int arr[100005][5];
int rot[100005]={0};
using namespace std;
void rotate(int k){
	for(int j=0;j<k;j++){
		if(rot[j]%180==45){
			if(s[j]=='+') s[j]='x';
			else if(s[j]=='x') s[j]='+';
			else if(s[j]=='-') s[j]='\\';
			else if(s[j]=='/') s[j]='-';
			else if(s[j]=='\\') s[j]='|';
			else if(s[j]=='|') s[j]='/';
		}
		else if(rot[j]%180==90){
			if(s[j]=='-') s[j]='|';
			else if(s[j]=='/') s[j]='\\';
			else if(s[j]=='\\') s[j]='/';
			else if(s[j]=='|') s[j]='-';
		}
		else if(rot[j]%180==135){
			if(s[j]=='+') s[j]='x';
			else if(s[j]=='x') s[j]='+';
			else if(s[j]=='-') s[j]='/';
			else if(s[j]=='/') s[j]='|';
			else if(s[j]=='\\') s[j]='-';
			else if(s[j]=='|') s[j]='\\';
		}
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	cin>>s;
	for(int i=0;i<3*n;i++) cin>>arr[i/3][i%3];
	for(int i=0;i<n;i++){
		for(int j=arr[i][0]-1;j<arr[i][1];j++) rot[j]+=arr[i][2];
	}
	rotate(k);
	cout<<s<<endl;
	return 0;
}
