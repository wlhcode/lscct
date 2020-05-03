#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int d1=(i*n+j+1)%10;
            int d2=((i*n+j+1)%100)/10;
            int d3=(i*n+j+1)/100;
            if(d3==0){
                if(d2==0){
                    if(d1==2||d1==9) cout<<"*";
                    else cout<<d1;
                }
                else{
                    if(d2==2||d2==9) cout<<"*";
                    else cout<<d2;
                    if(d1==2||d1==9) cout<<"*";
                    else cout<<d1;
                }
            }
            else{
                cout<<d3;
                if(d2==2||d2==9) cout<<"*";
                else cout<<d2;
                if(d1==2||d1==9) cout<<"*";
                else cout<<d1;
            }
            if(j+1<n) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
