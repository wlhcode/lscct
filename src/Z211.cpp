#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int year;
	while(cin>>year){
		if(year%400==0) cout<<"Year "<<setfill('0')<<setw(4)<<year<<" is a leap year.";
		else if(year%100==0) cout<<"Year "<<setfill('0')<<setw(4)<<year<<" is not a leap year.";
		else if(year%4==0) cout<<"Year "<<setfill('0')<<setw(4)<<year<<" is a leap year.";
		else cout<<"Year "<<setfill('0')<<setw(4)<<year<<" is not a leap year.";
		cout<<endl;
	}return 0;
}
