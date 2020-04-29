#include<bits/stdc++.h>
using namespace std;
int main(){
    double d,w,u,f=15;
    cin>>d>>w;
    u=ceil(d/200)+w-10;
    if(u>0) f+=1.4*u;
    if(d==0&&w==0) f=0;
    cout<<"$"<<setprecision(2)<<fixed<<f<<endl;
    return 0;
}
