#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,j,t=1;;
    bool yes=true;
    cin>>i>>j;
    while(i<=j){
        for(int k=i;k<=j;k++){
            double tmp=pow(i*i+k*k,0.5);
            int tmp2=tmp;
            //cout<<tmp2<<endl;
            if(tmp2==tmp){
                cout<<"Pythagoras numbers set "<<t<<" is : "<<i<<" "<<k<<" "<<pow(i*i+k*k,0.5)<<endl;
                t++;
                yes=false;
            }
        }
        i++;
    }
    if(yes) cout<<"There is no solution"<<endl;
    return 0;
}
