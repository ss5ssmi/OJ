#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int n,p,t,a,pp,pt,l;
	scanf("%d",&n);
	while(n--){
		memset(s,0,sizeof(s));
		scanf("%s",&s);
		getchar();
		a=p=t=pp=pt=0;
		l=strlen(s);
		for(int i=0;i<l;i++){
			if(s[i]=='P'){
				p++;
				pp=i;
			}
			if(s[i]=='T'){
				t++;
				pt=i;
			}
			if(s[i]=='A'){
				a++;
			}
		}
		if(p+a+t!=l || pt-pp<=1 || p>1 || t>1 || pp*(pt-pp-1)!=l-pt-1){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}
