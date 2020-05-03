#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
getline(cin,s);
int total=0;
for(int i=0;i<s.length();i++){
if(s.at(i)!=' ') total++;
}
cout<<total<<endl;
}
