#include<bits/stdc++.h>
using namespace std;
vector<string> n;
string s;
int arr[1000005];
int main(){
	int q=0;
	while(getline(cin,s)){
		int i;
		for(i=0;i<s.length();i++){
			if(s.at(i)>='0'&&s.at(i)<='9') break;
		}
		for(int j=0;j<s.length()-i;j++){
			arr[q]+=s.at(s.length()-j-1)*pow(10,j);
		}
		s.erase(i-1,s.length()-i+1);
		n.push_back(s);
		s.clear();
		q++;
	}
	int max=0,ind;
	for(int i=0;i<q;i++){
		if(arr[i]>max){
			max=arr[i];
			ind=i;
		}
	}
	cout<<n[ind]<<" is the elder brother."<<endl;
}
//Sam 45

