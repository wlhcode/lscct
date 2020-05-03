#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        int clapno=0;
        if(i%7==0){
            if(clapno==0){
                cout<<"Clap";
                clapno++;
            }
            else cout<<" clap";
        }
        int s=i;
        for(int j=10;j>=0;j--){
            int q=s/pow(10,j);
            if(q==7){
                if(clapno==0){
                    cout<<"Clap clap";
                    clapno++;
                }
                else cout<<" clap clap";
                break;
            }
            s-=q*pow(10,j);
        }
        if(clapno==0) cout<<i;
        cout<<endl;
    }
    return 0;
}
