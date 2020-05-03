#include "bits/stdc++.h"
using namespace std;
string month;
int d,m,y,n;
bool leap(int a){
    if(a%4==0&&(a%100!=0||a%400==0)) return true;
    else return false;
}
void advday(){
    int arr[15]={0,31,28,31,30,31,30,31,31,30,31,30,31,};
    d++;
    if(leap(y)) arr[2]++; 
    if(d>arr[m]){
        m++;
        d=1;
        if(m>12){
            y++;
            m=1;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>d>>month>>y>>n;
    if(month=="Jan") m=1;
    else if(month=="Feb") m=2;
    else if(month=="Mar") m=3;
    else if(month=="Apr") m=4;
    else if(month=="May") m=5;
    else if(month=="Jun") m=6;
    else if(month=="Jul") m=7;
    else if(month=="Aug") m=8;
    else if(month=="Sep") m=9;
    else if(month=="Oct") m=10;
    else if(month=="Nov") m=11;
    else if(month=="Dec") m=12;
    while(n>0){
        // if(m>=3){
        //     if(leap(y+1)&&n>=366){
        //         y++;
        //         n-=366;
        //         continue;
        //     }
        //     else if(!leap(y+1)&&n>=365){
        //         y++;
        //         n-=365;
        //         continue;
        //     }
        // }
        // else{
        //     if(leap(y)&&n>=366){
        //         y++;
        //         n-=366;
        //         continue;
        //     }
        //     else if(!leap(y)&&n>=365){
        //         y++;
        //         n-=365;
        //         continue;
        //     }
        // }
        advday();
        n--;
    }
    cout<<d<<" ";
    if(m==1) cout<<"Jan";
    else if(m==2) cout<<"Feb";
    else if(m==3) cout<<"Mar";
    else if(m==4) cout<<"Apr";
    else if(m==5) cout<<"May";
    else if(m==6) cout<<"Jun";
    else if(m==7) cout<<"Jul";
    else if(m==8) cout<<"Aug";
    else if(m==9) cout<<"Sep";
    else if(m==10) cout<<"Oct";
    else if(m==11) cout<<"Nov";
    else if(m==12) cout<<"Dec";
    cout<<" "<<y<<endl;
    return 0;
}
