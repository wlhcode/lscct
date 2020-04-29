#include<bits/stdc++.h>
using namespace std;
long double matrix[3][3];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Set "<<i+1<<": ";
		long double c,f,x,y,det;
		cin>>matrix[1][1]>>matrix[1][0]>>c;
		cin>>matrix[0][1]>>matrix[0][0]>>f;
		det=matrix[1][1]*matrix[0][0]-matrix[1][0]*matrix[0][1];
		if(det==0){
			cout<<"NO SOLUTION"<<endl;
			continue;
		}
		matrix[0][1]*=-1;
		matrix[1][0]*=-1;
		x=matrix[0][0]*c+matrix[1][0]*f;
		y=matrix[0][1]*c+matrix[1][1]*f;
		x*=1/det;
		y*=1/det;
		
		if(abs(2*x)<0.0005) x=0;
		if(abs(2*y)<0.0005) y=0;
		
		cout<<setprecision(3)<<fixed<<x<<" "<<y<<endl;
	}
}
