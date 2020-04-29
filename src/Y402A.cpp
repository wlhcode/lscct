#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[10005][10];
string sorting[10005];
main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++) cin>>arr[i][j];
        int A=arr[i][0],B=arr[i][1],C=arr[i][2],D=arr[i][3]; 
        arr[i][5]=(A*A+B*B)*(A*A+B*B)+(C*C+D*D)*(C*C+D*D);
        arr[i][6]=A*A+B*B;
        arr[i][7]=C*C+D*D;
        
        for(int p=5;p!=4;p++){
            if(p==8) p=0;
            
            int value=0;
            if(arr[i][p]!=0) value=floor(log(double(arr[i][p]))/log(10));
            
            for(int k=14;k>value;k--) sorting[i]+=' ';
            sorting[i]+=to_string(arr[i][p]);
        }
        
        int value=0;
        if(i!=0) value=floor(log(double(i))/log(10));
        
        for(int k=14;k>value;k--) sorting[i]+=' ';
        sorting[i]+=to_string(i);
    }
    
    sort(sorting,sorting+n);
    for(int i=0;i<n;i++){
        int index=0;
        string copy=sorting[i];
        for(int j=copy.length()-1;copy[j]!=' ';j--) index+=(copy[j]-'0')*pow(10,copy.length()-1-j);
        
        for(int j=0;j<3;j++) cout<<arr[index][j]<<" ";
        cout<<arr[index][3]<<endl;
        
        //cout<<copy<<endl;
    }
}
