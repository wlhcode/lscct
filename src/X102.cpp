#include<bits/stdc++.h>
using namespace std;
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	stack<int> one;
	stack<int> two;
	stack<int> thr;
	int n;
	cin>>n;
	for(int i=n;i>=1;i--) one.push(i);
	if(n%2==1){
		for(int i=0;i<pow(2,n)-1;i++){
			cout<<"Disk ";
			if(i%3==0){
				if(!one.empty()&&(thr.empty()||one.top()<thr.top())){
					cout<<one.top();
					thr.push(one.top());
					one.pop();
					cout<<" from A to C"<<endl;
				}
				else{
					cout<<thr.top();
					one.push(thr.top());
					thr.pop();
					cout<<" from C to A"<<endl;
				}
			}
			if(i%3==1){
				if(!one.empty()&&(two.empty()||one.top()<two.top())){
					cout<<one.top();
					two.push(one.top());
					one.pop();
					cout<<" from A to B"<<endl;
				}
				else{
					cout<<two.top();
					one.push(two.top());
					two.pop();
					cout<<" from B to A"<<endl;
				}
			}
			if(i%3==2){
				if(!two.empty()&&(thr.empty()||two.top()<thr.top())){
					cout<<two.top();
					thr.push(two.top());
					two.pop();
					cout<<" from B to C"<<endl;
				}
				else{
					cout<<thr.top();
					two.push(thr.top());
					thr.pop();
					cout<<" from C to B"<<endl;
				}
			}
		}
	}
	else{
		for(int i=0;i<pow(2,n)-1;i++){
			cout<<"Disk ";
			if(i%3==1){
				if(!one.empty()&&(thr.empty()||one.top()<thr.top())){
					cout<<one.top();
					thr.push(one.top());
					one.pop();
					cout<<" from A to C"<<endl;
				}
				else{
					cout<<thr.top();
					one.push(thr.top());
					thr.pop();
					cout<<" from C to A"<<endl;
				}
			}
			if(i%3==0){
				if(!one.empty()&&(two.empty()||one.top()<two.top())){
					cout<<one.top();
					two.push(one.top());
					one.pop();
					cout<<" from A to B"<<endl;
				}
				else{
					cout<<two.top();
					one.push(two.top());
					two.pop();
					cout<<" from B to A"<<endl;
				}
			}
			if(i%3==2){
				if(!two.empty()&&(thr.empty()||two.top()<thr.top())){
					cout<<two.top();
					thr.push(two.top());
					two.pop();
					cout<<" from B to C"<<endl;
				}
				else{
					cout<<thr.top();
					two.push(thr.top());
					thr.pop();
					cout<<" from C to B"<<endl;
				}
			}
		}
	}
}

