#include<bits/stdc++.h>
using namespace std;
string str;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<char> s;
    getline(cin,str);
    int p=0,max=0;
    for(int i=0;i<str.length();i++){
        if(s.empty()){
            if(str.at(i)=='('||str.at(i)==')'||str.at(i)=='['||str.at(i)==']'||str.at(i)=='{'||str.at(i)=='}'){
                s.push(str.at(i));
                p++;
                if(p>max) max=p;
            }
            continue;
        }
        if(s.top()+2==str.at(i)&&s.top()<str.at(i)&&str.at(i)!='*'){
            s.pop();
            p--;
        }
        else if(s.top()+1==str.at(i)&&s.top()=='('){
            s.pop();
            p--;
        }
        else if(str.at(i)=='('||str.at(i)==')'||str.at(i)=='['||str.at(i)==']'||str.at(i)=='{'||str.at(i)=='}'){
            s.push(str.at(i));
            p++;
        }
        if(p>max) max=p;
//		if(!s.empty()) cout<<s.top()<<endl;
    }
//	if(str.length()==0) max--;
    if(s.empty()) cout<<str.length()<<endl;
    else cout<<str.length()-s.size()<<endl;
//	cout<<s.size();((
    return 0;
}

