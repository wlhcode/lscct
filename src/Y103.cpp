#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	while(getline(cin,s)){
//		cout<<s<<endl;
		int left=0,right=-1;
		for(int i=0;i<s.length();i++){
			right++;
			if(s.at(i)!=' '&&i+1<s.length()) continue;
			if(i+1>=s.length()) right++;
//			cout<<left<<" "<<right<<endl;
//			cout<<s.at(right)<<endl;
			int k=0,power=0;
			for(int i=right-1;i>=left;i--){
				k+=(s.at(i)-'0')*pow(10,power);
				power++;
			}
			left=right+1;
			cout<<char(k);
		}
		cout<<endl;
	}
}

