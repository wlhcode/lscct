#include<iostream>
using namespace std;
int main(){
	int c,r,a,b,x=0,y=0;
	cin>>c>>r;
	while(cin>>a>>b){
		if(a==0&&b==0){
			return 0;
		}
		x+=a;
		y+=b;
		if(x<0) x=0;
		if(y<0) y=0;
		if(x>c) x=c;
		if(y>r) y=r;
		cout<<x<<" "<<y<<endl;
	}
}
