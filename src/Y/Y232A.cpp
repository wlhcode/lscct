#include<bits/stdc++.h>
using namespace std;
int arr[55][55];
int main(){
    int n,nb=1,mode=1,x=0,y=0;
    cin>>n;
    int tot=0;
    for(int i=n;i>=1;i--) tot+=i;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++) arr[j][i]=-1;
    }

    while(nb<=tot){
       while(mode==1){
           if(arr[x][y]>=0||y>=n){
               mode=2;
               y--;
               break;
           }
           arr[x][y]=nb%10;
           nb++;
           y++;
       }
       if(nb>tot) break;
       while(mode==2){
           x++;
           if(arr[x][y]>=0||x>=n){
               mode=3;
               x--;
               break;
           }
           arr[x][y]=nb%10;
           nb++;
       }
       if(nb>tot) break;
       while(mode==3){
           x--;
           y--;
           if(arr[x][y]>=0){
               mode=1;
               x++;
               y+=2;
               break;
           }
           arr[x][y]=nb%10;
           nb++;
       }
       if(nb>tot) break;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++) cout<<" ";
        for(int j=0;j<n;j++){
            if(arr[j][i]==-1) break;
            cout<<arr[j][i];
            if(arr[j+1][i]!=-1) cout<<" ";
        }
        cout<<endl;
    }
}
