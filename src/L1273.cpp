#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
string check;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	prime.push_back(2);
	for(int i=3;i<=1000000;i+=2){
		bool add=true;
		for(int j=3;j*j<=i;j++){
			if(i%j==0){
				add=false;
				break;
			}
		}
		if(add){
			check+=to_string(i);
			for(int d=0;d<check.length()-1;d++){
				char tmp=check.at(0);
				check.erase(0,1);
				check+=tmp;
				int query=stoi(check);
				for(int j=2;j*j<=query;j++){
					if(query%j==0){
						add=false;
						break;
					}
				}
				if(!add) break;
			}
			if(add) prime.push_back(i);
			check.clear();
		}
	}
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		vector<int>::iterator low;
		low=lower_bound(prime.begin(),prime.end(),q);
		int ind=low-prime.begin();
		if(!binary_search(prime.begin(),prime.end(),q)) ind--;
		cout<<prime.at(ind);
		if(i+1<n) cout<<" ";
		else cout<<endl;
	}
	return 0;
}

