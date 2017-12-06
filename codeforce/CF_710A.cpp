#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[2];
	scanf("%s",s);
	if((s[0]-'a'<1 && s[1]-'1'<1) || (s[0]-'a'>6 && s[1]-'1'>6) || (s[0]-'a'>6 && s[1]-'1'<1) || (s[0]-'a'<1 && s[1]-'1'>6)){
		printf("3\n");
	}else if(s[0]-'a'<1 || s[1]-'1'<1 || s[0]-'a'>6 || s[1]-'1'>6){
		printf("5\n");
	}else{
		printf("8\n");
	}
	return 0;
}
