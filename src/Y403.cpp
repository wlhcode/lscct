#include<iostream>
#include<algorithm>
using namespace std;
double arr[101];
int main(){
	double a,ave=0;
	cin>>a;
	for(int i=0;i<a-1;i++) cin>>arr[i];
	int tmp=a-1;
	sort(arr,arr+tmp);
	for(int i=a-2;i>0;i--) ave+=arr[i];
	ave/=a-2;
	if(ave>=50) cout<<"0"<<endl;
	else{
		ave-=arr[1]/(a-2);
		for(int i=0;i<=100;i++){
			if(ave+i/(a-2)>=50){
				cout<<i<<endl;
				return 0;
			}
		}cout<<"FAIL"<<endl;
		return 0;
	}
}
