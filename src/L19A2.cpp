#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int x,y;
	cin>>x>>y;
	int n;
	cin>>n;
	getline(cin,s);
	for(int z=0;z<n;z++){
		getline(cin,s);
		if(s.substr(0,9)=="Translate"){
			int a=0,digno=0;
			for(int i=0;i<s.length();i++){
				if(s.at(i)>='0'&&s.at(i)<='9') digno++;
			}
			if(s.substr(10,12)=="to the right"){
//				Translate to the right by 
				for(int i=26;i<26+digno;i++){
					a+=(s.at(i)-'0')*pow(10,-i+digno+25);
				}
				x+=a;
			}
			else if(s.substr(10,11)=="to the left"){
//				Translate to the left by 
				for(int i=25;i<25+digno;i++){
					a+=(s.at(i)-'0')*pow(10,-i+digno+24);
				}
				x-=a;
			}
			else if(s.substr(10,7)=="upwards"){
//				Translate upwards by 
				for(int i=21;i<21+digno;i++){
					a+=(s.at(i)-'0')*pow(10,-i+digno+20);
				}
				y+=a;
			}
			else{
//				Translate downwards by 
				for(int i=23;i<23+digno;i++){
					a+=(s.at(i)-'0')*pow(10,-i+digno+22);
				}
				y-=a;
			}
		}
		else if(s.substr(0,7)=="Reflect"){
//			Reflect about the 
			if(s.at(18)=='x'){
				y=-y;
			}
			else if(s.at(18)=='y'){
				x=-x;
			}
			else{
				int b=0;
				for(int i=s.length()-1;s.at(i)!=' ';i--){
					if(s.at(i)=='-') b=-b;
					else b+=(s.at(i)-'0')*pow(10,-i+s.length()-1);
				}
//				Reflect about the line
				if(s.at(23)=='x'){
					int d=b-x;
					x+=2*d;
				}
				else if (s.at(23)=='y'){
					int d=b-y;
					y+=2*d;
				}
			}
		}
		else{
//			Rotate clockwise about (
			int c=0,d=0,deg=0,temp=0;
			bool neg=0;
			for(int i=24;s.at(i)!='e';i++){
				if(s.at(i)=='-') neg=1;
				else if(s.at(i)<='9'&&s.at(i)>='0'){
					temp*=10;
					temp+=s.at(i)-'0';
				}
				else if(s.at(i)==','){
					c=temp;
					if(neg) c=-c;
					neg=0;
					temp=0;
				}
				else if(s.at(i)==')'){
					d=temp;
					if(neg) d=-d;
					neg=0;
					temp=0;
				}
				else if(s.at(i)=='d'){
					deg=temp;
					temp=0;
				}
			}
			for(int i=0;i<deg;i+=90){
				y-=d;
				x-=c;
				int tmpx=x,tmpy=y;
				x=tmpy;
				y=-tmpx;
				y+=d;
				x+=c;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
}
