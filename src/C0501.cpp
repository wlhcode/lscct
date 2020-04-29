#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y,a,b,c;
    cin>>a>>b>>c;
    x=max(a-100,0.0)*0.25+0.15*b+0.2*c;
    y=max(a-250,0.0)*0.45+0.35*b+0.25*c;
    cout<<"Plan A costs "<<setprecision(2)<<fixed<<x<<endl;
    cout<<"Plan B costs "<<y<<endl;
    if(x>y) cout<<"Plan B is cheapest."<<endl;
    else if(x<y) cout<<"Plan A is cheapest."<<endl;
    else cout<<"Plan A and B are the same price."<<endl;
    return 0;
}
