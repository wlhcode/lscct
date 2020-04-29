#include<bits/stdc++.h>
using namespace std;

void oclock(int h){
	if(h==1) cout<<"One o'clock"<<endl;
	if(h==2) cout<<"Two o'clock"<<endl;
	if(h==3) cout<<"Three o'clock"<<endl;
	if(h==4) cout<<"Four o'clock"<<endl;
	if(h==5) cout<<"Five o'clock"<<endl;
	if(h==6) cout<<"Six o'clock"<<endl;
	if(h==7) cout<<"Seven o'clock"<<endl;
	if(h==8) cout<<"Eight o'clock"<<endl;
	if(h==9) cout<<"Nine o'clock"<<endl;
	if(h==10) cout<<"Ten o'clock"<<endl;
	if(h==11) cout<<"Eleven o'clock"<<endl;
	if(h==12) cout<<"Twelve o'clock"<<endl;
}

void hour(int h){
	if(h==1||h==13) cout<<"one"<<endl;
	if(h==2) cout<<"two"<<endl;
	if(h==3) cout<<"three"<<endl;
	if(h==4) cout<<"four"<<endl;
	if(h==5) cout<<"five"<<endl;
	if(h==6) cout<<"six"<<endl;
	if(h==7) cout<<"seven"<<endl;
	if(h==8) cout<<"eight"<<endl;
	if(h==9) cout<<"nine"<<endl;
	if(h==10) cout<<"ten"<<endl;
	if(h==11) cout<<"eleven"<<endl;
	if(h==12) cout<<"twelve"<<endl;
}

void minute(int m){
	if(m==1) cout<<"One";
	if(m==2) cout<<"Two";
	if(m==3) cout<<"Three";
	if(m==4) cout<<"Four";
	if(m==5) cout<<"Five";
	if(m==6) cout<<"Six";
	if(m==7) cout<<"Seven";
	if(m==8) cout<<"Eight";
	if(m==9) cout<<"Nine";
	if(m==10) cout<<"Ten";
	if(m==11) cout<<"Eleven";
	if(m==12) cout<<"Twelve";
	if(m==13) cout<<"Thirteen";
	if(m==14) cout<<"Fourteen";
	if(m==16) cout<<"Sixteen";
	if(m==17) cout<<"Seventeen";
	if(m==18) cout<<"Eighteen";
	if(m==19) cout<<"Nineteen";
	if(m==20) cout<<"Twenty";
	if(m==21) cout<<"Twenty one";
	if(m==22) cout<<"Twenty two";
	if(m==23) cout<<"Twenty three";
	if(m==24) cout<<"Twenty four";
	if(m==25) cout<<"Twenty five";
	if(m==26) cout<<"Twenty six";
	if(m==27) cout<<"Twenty seven";
	if(m==28) cout<<"Twenty eight";
	if(m==29) cout<<"Twenty nine";
}

int main(){
	int h,m;
	cin>>h>>m;
	if(m==0) oclock(h);
	else if(m==30){
		cout<<"Half past ";
		hour(h);
	}
	else if(m%15==0){
		cout<<"Quarter ";
		if(m==15) cout<<"past ";
		else if(m==45) {
			cout<<"to ";
			h++;
		}
		hour(h);
	}
	else{
		int mm=m;
		m=min(m,60-m);
		minute(m);
		cout<<" minute";
		if(m>1) cout<<"s";
		if(mm>30){
			cout<<" to ";
			h++;
			hour(h);
		}
		else if(mm<30){
			cout<<" past ";
			hour(h);
		}
	}
	return 0;
}
