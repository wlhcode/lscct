#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if ((a*d+b*c)%(b*d)==0) {
		cout << (a*d+b*c)/(b*d) << endl;
		return 0;
	}
	
	int son=a*d+b*c;
	int mom=b*d;
	int min;
	
	if(mom>=son) min=son;
	if(mom<son) min=mom;
	
	int hcf=1;
	for(int tmp = 1; tmp<=min; tmp++){
		if(son%tmp==0 && mom%tmp==0){
			hcf=tmp;
		}
	}
	cout << son/hcf << "/" << mom/hcf << endl;
	return 0;
}
