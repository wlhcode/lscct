#include<iostream>
using namespace std;
int lol[21][21];
int main(){
    int h,w;
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cin>>lol[i][j];
    }
    for(int i=w-1;i>=0;i--){
        for(int j=0;j<h;j++){
            cout<<lol[j][i];
            if(j+1<h) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
