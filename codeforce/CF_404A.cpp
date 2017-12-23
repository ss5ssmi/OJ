#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,flag=1;
	set<char> t;
	char s[300][300],tmp,tmp1;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++) {
		scanf("%s",s[i]);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			t.insert(s[i][j]);
		}
	}
	tmp=s[n/2][n/2];
	tmp1=s[0][1];
	for(int i=0; i<=n/2; i++) {
		if(s[i][i]!=tmp || s[i][n-i-1]!=tmp) {
			flag=0;
			goto end;
		}
		for(int j=0;j<n;j++){
			if(s[i][j]!=tmp1 && j!=n-i-1 && j!=i){
				flag=0;
				goto end;
			}
		}
	}
	for(int i=n/2+1; i<n; i++) {
		if(s[i][n-i-1]!=tmp || s[i][i]!=tmp) {
			flag=0;
			goto end;
		}
		for(int j=0;j<n;j++){
			if(s[i][j]!=tmp1 && j!=n-i-1 && j!=i){
				flag=0;
				goto end;
			}
		}
	}
	if(t.size()!=2) flag=0;
end:
	printf("%s\n",flag?"YES":"NO");
	return 0;
}
