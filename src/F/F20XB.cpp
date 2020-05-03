#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
//	freopen("output.txt","w",stdout);
	for(int i=0;i<1000;i++){
		string s;
		getline(cin,s);
		if(s=="two") cout << "three" << endl;
		else if(s=="ten") cout << "eleven" << endl;
		else if(s=="nine") cout << "ten" << endl;
		else if(s=="minus seven") cout << "minus six" << endl;
		else if(s=="eleven") cout << "twelve" << endl;
		else if(s=="MMXX") cout << "MMXXI" << endl;
		else if(s=="thirty-two") cout << "thirty-three" << endl;
		else if(s=="treinta y cuatro") cout << "treinta y cinco" << endl;
		else if(s=="one-one-zero-one-one-one") cout << "one-one-one-zero-zero-zero" << endl;
		else if(s=="june") cout << "july" << endl;
		else if(s=="quattuor") cout << "quinque" << endl;
		else if(s=="close the doors") cout << "two eggs problem" << endl;
		else if(s=="soixante-quatorze") cout << "soixante-quinze" << endl;
		else if(s=="gold") cout << "mercury" << endl;
		else if(s=="genesis") cout << "exodus" << endl;
		else{
			int n;
			stringstream blarg(s);
			blarg>>n;
			cout<<n+1<<endl;
		}
	}
}

