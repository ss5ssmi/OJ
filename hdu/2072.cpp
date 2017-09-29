#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,t,count;
	char s[10000];
	char a[100][100];
	memset(s,0,sizeof(s));
	memset(a,0,sizeof(a));
	while(true){
		count=t=0;
		gets(s);
		s[strlen(s)]='\0';
		if(s[0]=='#'){
			break;
		}
		l1:for(i=0;s[i]!='\0';i++){
			l2:for(j=t;s[j]!='\0';j++){
				if((s[j]>=97&&s[j]<=122)||(s[j]>=65&&s[j]<=90)){
					a[i][j]=s[j];
					t=j;
				}else{
					t++;
					goto l1;
				}
			}
		}
		for(i=0;i<100;i++){
				puts(a[i]);
		}
		for(k=0;k<100;k++){
			if((a[k][0]>=97&&a[k][0]<=122)||(a[k][0]>=65&&a[k][0]<=90)){
				count++;
			}
		}
		printf("%d\n",count);
		}
	return 0;	
	}

