#include<bits/stdc++.h>
using namespace std;
int arr[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	cin.get();
	for(int q=1;q<=n;q++){
		for(int i=0;i<28;i++) arr[i]=0;
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
			if(s[i]>='a'&&s[i]<='z') arr[s[i]-'a']++;
		}
		sort(arr,arr+26);
		int ans=0;
		for(int i=26;i>0;i--) ans+=arr[i-1]*i;
		cout<<"Case #"<<q<<": "<<ans<<endl;		
	}
}
