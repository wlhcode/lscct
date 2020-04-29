#include<bits/stdc++.h>
#define ll long long
using namespace std;
char word[55];
char guess[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>word>>guess;
	int wlen=strlen(word);
	int glen=strlen(guess);
	for(int i=0;i<wlen;i++){
		bool test=true;
		for(int j=0;j<glen;j++){
			if(guess[j]==word[i]){
				cout<<guess[j];
				test=false;
				break;
			}
		}
		if(test) cout<<"_";		
	}
	cout<<endl;
	return 0;
}

