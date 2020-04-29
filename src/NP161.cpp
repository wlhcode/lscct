#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
bool leapyear(int year){
	if(year%400==0) return true;
	else if(year%100==0) return false;
	else if(year%4==0) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int l,r,count=0;
	cin>>l>>r;
	int ldate=l%100;
	int lmonth=(l-ldate)%10000/100;
	int lyear=(l-lmonth-ldate)/10000;
	int rdate=r%100;
	int rmonth=(r-rdate)%10000/100;
	int ryear=(r-rmonth-rdate)/10000;
	for(int i=l;i<r;ldate++){
		if(lmonth==1||lmonth==3||lmonth==5||lmonth==7||lmonth==8||lmonth==10||lmonth==12){
			if(ldate>=32){
				lmonth++;
				ldate=1;
			}
		}
		else if(lmonth==2){
			if(leapyear(lyear)){
				if(ldate>=30){
					lmonth++;
					ldate=1;
				}
			}
			else{
				if(ldate>=29){
					lmonth++;
					ldate=1;
				}
			}
		}
		else{
			if(ldate>=31){
				lmonth++;
				ldate=1;
			}
		}
		if(lmonth>=13){
			lmonth=1;
			lyear++;
		}
		i=ldate+lmonth*100+lyear*10000;
		s.clear();
		s+=to_string(i);
		bool pal=true;
		for(int i=0;i<4;i++){
			if(s.at(i)!=s.at(7-i)){
				pal=false;
				break;
			}
		}
		if(pal) count++;
	}
	if(l==r){
	    s+=to_string(l);
		bool pal=true;
		for(int i=0;i<4;i++){
			if(s.at(i)!=s.at(7-i)){
				pal=false;
				break;
			}
		}
		if(pal) count++;
	}
	cout<<count<<endl;
	return 0;
}

