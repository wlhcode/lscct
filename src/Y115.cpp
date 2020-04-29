#include<bits/stdc++.h>
using namespace std;
char b[105][105];
string s;
int main(){
    int n=1;
    while(true){
        int c,r;
        cin>>r>>c;
        if(r==0&&c==0) break;
        if(n>=2) cout<<endl;
        for(int i=0;i<104;i++){
            for(int j=0;j<104;j++) b[j][i]='.';
        }
        for(int i=1;i<=r;i++){
            cin>>s;
            for(int j=1;j<=c;j++) b[j][i]=s[j-1];
        }
        cout<<"Field #"<<n<<":"<<endl;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(b[j][i]=='*') continue;
                int k=0;
                for(int y=i-1;y<=i+1;y++){
                    for(int x=j-1;x<=j+1;x++){
                        if(b[x][y]=='*') k++;
                    }
                }
                b[j][i]=k+'0';
            }
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++) cout<<b[j][i];
            cout<<endl;
        }
        n++;
    }    
}
