#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,b,a,flag=0;
	char s[11];
	scanf("%d",&n);
	while(n--){
		scanf("%s %d %d",s,&b,&a);
		if(b>=2400 && a>b){
			flag=1;
		}
	}
	printf("%s\n",flag?"YES":"NO");
	return 0;
}
