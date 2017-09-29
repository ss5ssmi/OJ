#include<stdio.h>
#include<string.h>
int main()
{
//	char s[1000];
//	while( gets(s) ) {
//		int n=0;
//		int len=strlen(s);
//		for(int i=0; i<len; i++) {
//			if(s[i]=='"') {
//				if(++n%2==0) printf("''");
//				else printf("``");
//			} else {
//				printf("%c",s[i]);
//			}
//		}
//		printf("\n");
//	}
	int c,f=1;
	while((c=getchar())!=EOF) {
		if(c=='"'){
			printf("%s",f==1?"``":"''");
			f=!f;
		}else{
			printf("%c",c);
		}
	}
	return 0;
}
