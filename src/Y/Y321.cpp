#include<bits/stdc++.h>
#define ld double
#define ull long long
using namespace std;
string inbase,outbase,num;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>inbase>>outbase>>num;
    
    ull in=16,out=16;
    if(inbase=="BIN") in=2;
    else if(inbase=="OCT") in=8;
    else if(inbase=="DEC") in=10;
    if(outbase=="BIN") out=2;
    else if(outbase=="OCT") out=8;
    else if(outbase=="DEC") out=10;
    
    for(int i=0;i<num.length();i++){
        if(num[i]>='A') num[i]=10+num[i]-'A';
        else num[i]-='0';
    }
    
    ull ornum=0;
    for(int i=num.length()-1;i>=0;i--){
        ornum+=num[i]*pow(in,num.length()-1-i);
    }
    
    if(out==10){
        cout<<ornum<<"(x)"<<endl;
    }
    else{
    	if(ornum!=0){
    		ld logbase=0;
	        logbase=floor(log(ld(ornum))/log(ld(out)));
	        for(ull i=logbase;i>=0;i--){
	            ld div=ld(ornum)/pow(ld(out),ld(i));
	            div=floor(div);
	            if(div>=10) cout<<char('A'+div-10);
	            else cout<<setprecision(0)<<fixed<<div;
	            ornum-=div*pow(out,i);
	        }
    	}
    	else{
    		cout<<0;
    	}
    	
        if(out==2) cout<<"(ii)"<<endl;
        else if(out==8) cout<<"(viii)"<<endl;
        else cout<<"(xvi)"<<endl;
    }
}
