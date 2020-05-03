#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,t=0,lcm;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0) t++;
        if(i%k==0&&i%l==0&&i%m==0&&i%n==0){
            lcm=i;
            break;
        }
    }
    int s=d/lcm;
    t*=s;
    for(int i=s*lcm+1;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0) t++;
    }
    cout<<t<<endl;
    return 0;
}
