#include<bits/stdc++.h>
using namespace std;
vector<string> li;
string test;
int tens(int n){
    n-=n%10;
    n/=10;
    return n;
}
int ones(int n){
    return n%10;
}
string number(int n){
    if(n==0) return "zero";
    if(n==1) return "one";
    if(n==2) return "two";
    if(n==3) return "three";
    if(n==4) return "four";
    if(n==5) return "five";
    if(n==6) return "six";
    if(n==7) return "seven";
    if(n==8) return "eight";
    if(n==9) return "nine";
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=99;i++){
        test.clear();
        if(tens(i)>0) test+=number(tens(i))+" ";
        test+=number(ones(i));
        li.push_back(test);
    }
//    cout<<li[28];
//    cout<<li[18];
    sort(li.begin(),li.end());
    int row=0,count=0;
    for(int i=1;i<=99;i++){
        for(int j=n;j<=m;j++){
            test.clear();
            if(tens(j)>0) test+=number(tens(j))+" ";
            test+=number(ones(j));
//            cout<<test<<endl;
            if(test==li[i-1]){
                cout<<j;
                row++;
                count++;
                if(row<10&&count<m-n+1) cout<<" ";
                else{
                    cout<<endl;
                    row=0;
                }
                break;
            }
        }
    }
//    cout<<li[1]<<endl;
    return 0;
}
