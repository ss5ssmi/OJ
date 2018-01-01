#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	map<int,int> s;
	map<int,int>::iterator it;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&t);
		s[t]++;
	}
	for(it=s.begin(); it!=s.end(); it++) {
		if(it->second!=n/2){
			printf("NO\n");
			return 0;
		}
	}
	if(s.size()!=2) {
		printf("NO\n");
	} else {
		printf("YES\n");
		for(it=s.begin(); it!=s.end(); it++) {
			printf("%d",it->first);
			if(it!=s.end()) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
