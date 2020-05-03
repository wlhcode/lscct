#include<bits/stdc++.h>
using namespace std;
int arr[200][100];
int main(){
    int n;
    cin>>n;
    int row=6*n-5,col=3*n-2;

    for(int i=0;i<=col+n-1+2;i++){
        for(int j=0;j<=row+2;j++) arr[j][i]=-1;
    }

    for(int i=1;i<=col;i++){
        int tmp=1;
        for(int j=col-i+1;j<=col+i-1;j+=2){
            arr[j][i]=min(min(tmp,i-tmp+1),col-i+1);
            tmp++;
//            cout<<arr[j][i];
        }
//        cout<<endl;
    }

    /*
    for(int i=1;i<=col;i++){
        for(int j=1;j<=row;j++){
            if(arr[j][i]==0) cout<<" ";
            else cout<<arr[j][i];
        }
        cout<<endl;
    }
    */
    int tmp2=1;
    for(int i=col+n-1;i>=n;i--){
        int tmp=1;
        for(int j=col-tmp2+1;j<=col+tmp2-1;j+=2){
            arr[j][i]=max(min(min(tmp,tmp2-tmp+1),col-tmp2+1),arr[j][i]);
            tmp++;
//            cout<<arr[j][i];
        }
        tmp2++;
//        cout<<endl;
    }


    for(int i=1;i<=col+n-1;i++){
        bool fin=false;
        for(int j=1;j<=row;j++){
            if(arr[j][i]==-1){
                if(arr[j+1][i]==-1&&fin) break;
                cout<<" ";
            }
            else{
                cout<<arr[j][i]%10;
                fin=true;
            }

        }
        cout<<endl;
    }

}
