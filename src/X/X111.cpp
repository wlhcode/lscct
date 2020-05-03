#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[10];
char str[10];
int k=1,len;
void fact(int n){
	if(n==1) return;
	k*=n;
	return fact(n-1);
}
bool same(){
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]==arr[j]) return true;
		}
	}
	return false;
}
void add(){
	arr[len-1]++;
	for(int i=len-1;i>=0;i--){
		if(arr[i]>len){
			arr[i]=1;
			arr[i-1]++;
		}
	}
	while(same()){
		arr[len-1]++;
		for(int i=len-1;i>=0;i--){
			if(arr[i]>len){
				arr[i]=1;
				arr[i-1]++;
			}
		}
	}
}	
int main(){
	cin>>str;
	len=strlen(str);
	for(int i=1;i<=len;i++) arr[i-1]=i;
	sort(str,str+len);
	fact(len);
	cout<<str<<endl;
	int times=1;
	while(times<k){
		add();
		times++;
		for(int i=0;i<len;i++){
			cout<<str[arr[i]-1];
			//cout<<arr[i];
		}
		cout<<endl;
	}
}

