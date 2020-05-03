#include<iostream>
#include<algorithm>
using namespace std;
int p[25000];
int f[25000];
int main(){
    int n,m,c,q=0,t=0;
    cin>>n>>m>>c;
    for(int i=0;i<2*m;i+=2){
        cin>>p[i]>>p[i+1];
        if(p[i]==c){
            f[q]=p[i+1];
            q++;
        }
        else if(p[i+1]==c){
            f[q]=p[i];
            q++;
        }
    }
    sort(f,f+q);
    for(int i=0;i<q;i++){
        //cout<<f[i]<<" ";
        if(i==0) t++;
        else if(f[i]!=f[i-1]) t++;
    }
    cout<<t<<endl;
    return 0;
}
