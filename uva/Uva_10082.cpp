#include<cstdio>
#include<string.h>
using namespace std;
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
	char c;
	while((c=getchar())!=EOF) {
		int flag;
		for(int i=1; i<strlen(s); i++) {
			flag=1;
			if(s[i]==c) {
				flag=0;
				printf("%c",s[i-1]);
				break;
			}
		}
		if(flag) {
			printf("%c",c);
		}
	}
	return 0;
}
