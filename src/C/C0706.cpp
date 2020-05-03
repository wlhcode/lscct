#include<bits/stdc++.h>
using namespace std;
int arr[500];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<3*n;i++) cin>>arr[i];
	for(int i=0;i<3*n;i+=3){
	    if(arr[i]<1989) cout<<"Yes"<<endl;
	    else if(arr[i]>1989) cout<<"No"<<endl;
	    else{
	        if(arr[i+1]<2) cout<<"Yes"<<endl;
	        else if(arr[i+1]>2) cout<<"No"<<endl;
	        else{
	            if(arr[i+2]<=27) cout<<"Yes"<<endl;
	            else cout<<"No"<<endl;
	        }
	    }
	}
	return 0;
}
