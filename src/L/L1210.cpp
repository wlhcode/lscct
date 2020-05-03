#include<bits/stdc++.h>
using namespace std;
string str;
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int mod(int m,int n){
    double md=m,nd=n;
    double q=md/nd;
    q=floor(q)*n;
    return int(m-q);
}
int main(){
    getline(cin,str);
    int n;
    cin>>n;
    int time=str.length()/gcd(str.length(),n);
    for(int i=0;i<time;i++){
        for(int j=0;j<str.length();j++) cout<<str.at(mod(j-i*n,str.length()));
        cout<<endl;
    }
}
