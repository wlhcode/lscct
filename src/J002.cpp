#include "bits/stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int a=10;a<=2500;a++){
        for(int b=10;b<=2500;b++){
            int c=floor(sqrt(a*a+b*b));
            if(c*c!=a*a+b*b) continue;
            else if(c>2500) continue;
            int area=a*b/2;
            string s=to_string(area);
            bool samechar=1;
            for(int i=1;i<s.length();i++){
                if(s[i]!=s[i-1]){
                    samechar=0;
                    break;
                }
            }
            if(samechar){
                cout<<setw(5)<<a<<"    "<<setw(5)<<b<<"    "<<setw(5)<<c<<"    Area = "<<setw(6)<<area<<endl;
            }
        }
    }
    return 0;
}
