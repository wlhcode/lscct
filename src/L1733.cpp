#include"bits/stdc++.h"
#define int long long
#define double long double
using namespace std;
int32_t main(){
    string s;
    cin>>s;
    int z=0;
    for(int i=0;i<=s.length()-1;i++){
        if(s[i]=='?') z++;
    }
    if(z==0){
        int q=0,b=s.length()-1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                q+=b-i;
                b--;
            }
            if(q>=1000000007) q-=1000000007;
        }
        cout<<q<<endl;
    }
    else{
        int b=s.length()-1,bov2=0,q=0,qov4=0;
        for(int i=s.length()-1;i>=0;i--){
        	q+=qov4/4;
			qov4%=4;
			b+=bov2/2;
			bov2%=2; 
            if(s[i]=='1'){
                q+=b-i;
                qov4+=bov2*2;
                b--;
            }
            else if(s[i]=='?'){
            	q+=(b-i)/2;
            	if(bov2==0) qov4+=(b-i)%2*2;
				else qov4+=(b-i)%2*2+1;
            	b--;
            	bov2++;
            }
            if(q>=1000000007) q-=1000000007;
        }
        while(qov4!=0){
        	q*=2;
        	qov4*=2;
        	q+=qov4/4;
        	qov4%=4;
            if(q>=1000000007) q-=1000000007;
            z--;
		}
        for(int i=0;i<z;i++){
            q*=2;
            if(q>=1000000007) q-=1000000007;
        }
        cout<<q<<endl;
    }
}
