#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	cout<<"Enter phrase> ";
	while(cin>>s){
		if(s=="CU") cout<<"see you"<<endl;
		else if(s==":-)") cout<<"I'm happy"<<endl;
		else if(s==":-(") cout<<"I'm unhappy"<<endl;
		else if(s==";-)") cout<<"wink"<<endl;
		else if(s==":-P") cout<<"stick out my tongue"<<endl;
		else if(s=="(~.~)") cout<<"sleepy"<<endl;
		else if(s=="TA") cout<<"totally awesome"<<endl;
		else if(s=="CCC") cout<<"Canadian Computing Competition"<<endl;
		else if(s=="CUZ") cout<<"because"<<endl;
		else if(s=="TY") cout<<"thank-you"<<endl;
		else if(s=="YW") cout<<"you're welcome"<<endl;
		else if(s=="TTYL"){
			cout<<"talk to you later"<<endl;
			return 0;
		}
		else cout<<s<<endl;
		cout<<"Enter phrase> ";
	}
	return 0;
}

