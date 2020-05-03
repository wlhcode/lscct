#include<bits/stdc++.h>
using namespace std;
int arr[1500][1500];
int main(){
    int n,x1,y1,x2,y2,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        for(int j=y1;j>y2;j--){
            for(int k=x1;k>x2;k--) arr[k][j]++;
        }
    }
    //cout<<arr[0][0];
    
    for(int i=0;i<=1001;i++){
        for(int j=0;j<=1001;j++){
            //cout<<arr[j][i];
            if(arr[j][i]==n) a++;
        }
        //cout<<endl;
    }
    
    cout<<a<<endl;
}
