#include<bits/stdc++.h>
using namespace std;
double arr[101][3];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1];
    double min=1000000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double area=max(abs(arr[j][0]-arr[i][0]),abs(arr[j][1]-arr[i][1]));
            area*=area;
            if(min>area) min=area;
        }
    }
    cout<<setprecision(0)<<fixed<<min<<endl;
}
