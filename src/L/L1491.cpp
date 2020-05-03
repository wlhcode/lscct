#include<bits/stdc++.h>
using namespace std;
char q[6][4];
void f(int a,int b,int c,int d,int e,int g){
    if(q[1][a]==q[2][b]&&q[2][b]==q[3][c]&&q[3][c]==q[4][d]&&q[4][d]==q[5][e]) cout<<"Line "<<g<<": "<<q[1][a]<<endl;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            cin>>q[j][i];
        }
    }
    f(2,2,2,2,2,1);
    f(1,1,1,1,1,2);
    f(3,3,3,3,3,3);
    f(1,2,3,2,1,4);
    f(3,2,1,2,3,5);
    f(1,1,2,1,1,6);
    f(3,3,2,3,3,7);
    f(2,1,1,1,2,8);
    f(2,3,3,3,2,9);
}
