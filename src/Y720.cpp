#ifndef __cplusplus
#include 
#else
extern "C" {
#endif
	bool ask (int x, int y);
	void report (int x);
	void investigation (int N); 
#ifdef __cplusplus    
}
#endif
 
// TODO: global variables can be declared here
#include<bits/stdc++.h>
using namespace std;

void investigation (int N) {
	// TODO: implementation
	vector<int> v;
	for(int i=1;i<=N;i++) v.push_back(i);
	
	while(v.size()!=1){
		for(int i=0;i<v.size();i++){
			if(i+1>=v.size()) break;
			if(ask(v[i],v[i+1])) v.erase(v.begin()+i);
			else v.erase(v.begin()+i+1);
		}
	}
	report(v[0]);
}
