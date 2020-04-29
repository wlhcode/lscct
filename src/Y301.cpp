#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr1[10000];
int arr2[10000];
char s1[10000];
char s2[10000];
int sum[10000]={-1};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s1>>s2;
	int len=max(strlen(s1),strlen(s2));
	int temp=strlen(s1)-1;
	for(int i=len-1;temp>=0;i--){
		arr1[i]=s1[temp]-'0';
		temp--;
	}
	temp=strlen(s2)-1;
	for(int i=len-1;temp>=0;i--){
		arr2[i]=s2[temp]-'0';
		temp--;
	}
	for(int i=0;i<len;i++) sum[i]=arr1[i]+arr2[i];
	for(int i=len-1;i>=1;i--){
		while(sum[i]>9){
			sum[i]-=10;
			sum[i-1]++;
		}
	}
	//for(int i=0;i<len;i++) cout<<arr1[i];
	for(int i=0;i<len;i++) cout<<sum[i];
	cout<<endl;
	return 0;
}

