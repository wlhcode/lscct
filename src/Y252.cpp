#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int day=1,month=11;
    while(month<11+n){
        cout<<day;
        if(day>=11&&day<=13) cout<<"th ";
        else if(day%10==1) cout<<"st ";
        else if(day%10==2) cout<<"nd ";
        else if(day%10==3) cout<<"rd ";
        else cout<<"th ";
        if(month%12==0) cout<<"December, ";
        else if(month%12==1) cout<<"January, ";
        else if(month%12==2) cout<<"February, ";
        else if(month%12==3) cout<<"March, ";
        else if(month%12==4) cout<<"April, ";
        else if(month%12==5) cout<<"May, ";
        else if(month%12==6) cout<<"June, ";
        else if(month%12==7) cout<<"July, ";
        else if(month%12==8) cout<<"August, ";
        else if(month%12==9) cout<<"September, ";
        else if(month%12==10) cout<<"October, ";
        else if(month%12==11) cout<<"November, ";
        cout<<2013+ceil(double(month)/12)-1<<endl;
        day+=7;
        if(day>28){
            if(month%12==2){
                month++;
                day=day%28;
            }
        }
        if(day>30){
            if(month%12==4||month%12==6||month%12==9||month%12==11){
                month++;
                day=day%30;
            }
        }
        if(day>31){
            month++;
            day=day%31;
        }
    }
}
