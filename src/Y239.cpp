#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int out=3*(n-1)+1;
    for(int i=1;i<=out;i++){
        for(int j=0;j<out-i;j++) cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<(min(min(j,i-j+1),out-i+1))%10;
            if(j>=i) cout<<endl;
            else cout<<" ";
        }
    }
}
