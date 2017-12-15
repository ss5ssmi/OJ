#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b;
	char s[100010];
	scanf("%d%d%d",&n,&a,&b);
	scanf("%s",s);
	if(s[a-1]!=s[b-1]){
		printf("1\n");
	}else{
		printf("0\n");
	}
	return 0;
}
