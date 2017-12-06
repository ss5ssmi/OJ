#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[20];
	scanf("%s",s);
	int l=strlen(s);
	printf("%d\n",((26-l)*(l+1))+(l*l)); 
	return 0;
}
