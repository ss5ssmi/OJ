#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,s[100];
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	for(int i=0,j=0; i<n; i++) {
		int tmp=0;
		while(tmp+s[j]<=m) {
			tmp+=s[j];
			s[j++]=0;
			if(j>=n) {printf("%d\n",i+1);return 0;}			
		}

	}
	return 0;
}
