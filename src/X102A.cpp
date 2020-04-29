#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    stack<int> f,s,t;
    f.push(1024);s.push(1024);t.push(1024);
    for(int i=n;i>=1;i--) f.push(i);
    while(true){
        cout<<"0 1"<<endl;
        s.push(f.top());
        f.pop();

        cout<<"1 2"<<endl;
        t.push(s.top());
        s.pop();
        if(t.size()>n) break;

        if(f.top()>s.top()){
            f.push(s.top());
            s.pop();
            cout<<"1 0"<<endl;
        }
        else{
            s.push(f.top());
            f.pop();
            cout<<"0 1"<<endl;
        }

        cout<<"2 1"<<endl;
        s.push(t.top());
        t.pop();
        
        cout<<"1 0"<<endl;
        f.push(s.top());
        s.pop();

        if(s.top()>t.top()){
            s.push(t.top());
            t.pop();
            cout<<"2 1"<<endl;
        }
        else{
            t.push(s.top());
            s.pop();
            cout<<"1 2"<<endl;
        }
    }
    return 0;
}
