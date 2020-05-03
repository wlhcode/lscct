#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int arr[20]={0}; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		s+=std::to_string(i);
		for(int j=0;j<s.size();j++){
			arr[char(s.at(j))-'0']++;
		}
		s.clear();
	}
	for(int i=0;i<10;i++) cout<<i<<" "<<arr[i]<<endl;
	return 0;
}

