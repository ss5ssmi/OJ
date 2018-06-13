#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
	int n,s[50],v[1001]={0};
	stack <int>stk;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=n-1;i>=0;i--){
		if( v[s[i]] == 0 ){
			stk.push(s[i]);
			v[s[i]]=1;
		}
	}
	printf("%d\n",stk.size());
	while(!stk.empty()){
		printf("%d",stk.top());
		stk.pop();
		if(!stk.empty()) printf(" ");
	}
	return 0;
}
