#include "bits/stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1) cout<<0<<endl;
    else if(n<=3) cout<<-1<<endl;
    else if(n==4){
        cout<<3<<endl;
        cout<<"1 4"<<endl;
        cout<<"3 4"<<endl;
        cout<<"1 2"<<endl;
    }
    else if(n<=6){
        cout<<2<<endl;
        cout<<"1 3"<<endl;
        cout<<"2 5"<<endl;
    }
    else if(n%4==0||n%4==3){
        cout<<(n+1)/4<<endl;
        int x=(n+1)/2+1-n%2;
        for(int i=1;i<=(n+1)/4;i++){
            cout<<2*i-1<<" "<<x<<endl;
            x+=2;
        }
    }
    else if(n%4==2){
        n--;
        cout<<n/4+1<<endl;
        for(int i=1;i<=n/4*2+1;i+=2) cout<<i<<" "<<n/4*2+i+1<<endl;
    }
    else{
        cout<<n/4<<endl;
        for(int i=2;i<=n/2;i+=2) cout<<i<<" "<<i+n/2<<endl;
    }
    return 0;
}
