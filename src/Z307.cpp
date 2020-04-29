#include<bits/stdc++.h>
using namespace std;
string dllm;
int main(){
    getline(cin,dllm);
    if(dllm[0]==39){
        cout<<"Direct Speech"<<endl;
        for(int i=1;i<dllm.length();i++){
            if(dllm[i]==39){
                for(int j=i+2;dllm[j]!=' ';j++) cout<<dllm[j];
                cout<<endl;
                break;
            }
        }
    }
    else{
        cout<<"Reported Speech"<<endl;
        for(int j=0;dllm[j]!=' ';j++) cout<<dllm[j];
        cout<<endl;
    }
}
