#include<bits/stdc++.h>
using namespace std;
int main() {
	string s,t;
	int ls,lt;
	cin>>ls>>lt;
	cin>>s>>t;
	int ans=1e9;
	set<int> ansc;
	for(int i=0; i<lt-ls+1; i++) {
		int tmp=0;
		set<int> c;
		for(int j=0; j<ls; j++) {
			if(t[i+j]!=s[j]) {
				tmp++;
				c.insert(j+1);
//				printf("%d %c %c %d\n",i,s[j],t[i+j],tmp);
			}
		}
		if(tmp<ans) {
			ans=tmp;
			ansc=c;
		}
	}
	printf("%d\n",ans);
	for(set<int>::iterator it=ansc.begin(); it!=ansc.end(); it++) {
		printf("%d",*it);
		if(it!=ansc.end()) printf(" ");
		else printf("\n");
	}
	return 0;
}
