#include<bits/stdc++.h>
using namespace std;
int n,s[100];
int max_0(){
	for(int i=1;i<n;i++){
		if(s[i]>=s[0]) return 0;
	}
	return 1;
}
int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	int t=s[0]; 
	while(!max_0()) {
		int tmp=-1,ti;
		for(int i=1; i<n; i++) {
			if(s[i]>=tmp) {tmp=s[i];ti=i;}
		}
		s[ti]--;
		s[0]++;
	}
	printf("%d\n",s[0]-t);
	return 0;
}
