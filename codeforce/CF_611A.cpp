#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[5];
	int t;
	scanf("%d of %s",&t,&s);
	if(s[0]=='m'){
		if(t==31) printf("7\n");
		else if(t==30) printf("11\n");
		else printf("12\n");
	}else if(s[0]=='w'){
		if(t==5 || t==6) printf("53\n");
		else printf("52\n");
	}
	return 0;
}
