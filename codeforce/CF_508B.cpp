#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100000];
	int even=-1;
	scanf("%s",s);
	int l=strlen(s);
	for(int i=0; i<l-1; i++) {
		if((s[i]-'0')%2==0) {
			if(s[i]<s[l-1]){
				even=i;
				break;
			}else{
				even=i;
			}
		}
	}
	char t=s[l-1];
	s[l-1]=s[even];
	s[even]=t;
	if(even!=-1 && s[l-1]-'0'%2!=0) {
		for(int i=0; i<l; i++) {
			printf("%c",s[i]);
		}
		printf("\n");
	} else if(even!=-1 && s[l-1]-'0'%2==0) {
		for(int i=0; i<l; i++) {
			printf("%c",s[i]);
		}
		printf("\n");
	} else {
		printf("-1\n");
	}
	return 0;
}
