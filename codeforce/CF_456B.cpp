#include<bits/stdc++.h>
using namespace std;
int main() {
	char n[1000000];
	scanf("%s",&n);
	int ans=0;
	for(int i=0;i<strlen(n);i++){
		ans = (ans *10 + n[i]-'0') %4;
	}
	printf("%d\n",ans?0:4);
	return 0;
}
