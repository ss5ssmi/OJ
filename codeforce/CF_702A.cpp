#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	int maxlen,len=1;
	for(int i=0; i<n-1; i++) {
		if(s[i]<s[i+1]) {
			len++;
		} else {
			maxlen=max(maxlen,len);
			len=1;
		}
	}
	maxlen=max(maxlen,len);
	printf("%d\n",maxlen);
	return 0;
}
