#include<stdio.h>
#include<string.h>
void f(char s[]);
int main(){
	char a[100000],b[100000];
	int s,i,j,l1,l2,flag=1;;
	while(scanf("%s%s",a,b)!=EOF){
		l1=strlen(a);
		l2=strlen(b);
		printf("%d,%d",l1,l2);
		for(i=0,j=0;i<l1,j<l2;i++,j++){
//			if(a[i]!=b[j]){
//				flag=0;break;
//			}
			printf("%c",a[i]);
		}
		printf("\n");
		for(i=0,j=0;i<l1,j<l2;i++,j++){
			printf("%c",b[i]);
		}
//		if(flag){
//			printf("YES\n");
//		}else{
//			printf("NO\n");
//		}
	}
	return 0;
}

void f(char s[]){
	int pos_dot,len,flag_dot=0,i,j,k;
	len=strlen(s);
	if(s[0]!='-'){
		for(i=len;i>=0;i--){
			s[i+1]=s[i];
		}
		s[0]='+';
	}
	len=strlen(s);
	for(pos_dot=0;pos_dot<len;pos_dot++){
		if(s[pos_dot]=='.'){
			flag_dot=1;break;
		}
	}
	if(!flag_dot){
		s[len]='.';
		pos_dot=len;
		len++;
	}

	for(i=0;i<len-j;i++){
		s[i]=s[i+j];
	}
	pos_dot=pos_dot-j;
	k=k-j;
	s[j+1]='\0';
}
