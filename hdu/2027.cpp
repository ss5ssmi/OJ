#include<stdio.h>
#include<string.h>
int main(){
	int n,a,e,i,o,u,l,j;
	char s[100];
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
		a=e=i=o=u=0;
		gets(s);
		l=strlen(s);
		for(j=0;j<l;j++){
			if(s[j]=='a'){
				a++;
			}else if(s[j]=='e'){
				e++;
			}else if(s[j]=='i'){
				i++;
			}else if(s[j]=='o'){
				o++;
			}else if(s[j]=='u'){
				u++;
			}
		}
		printf("a:%d\n",a);
		printf("e:%d\n",e);
		printf("i:%d\n",i);
		printf("o:%d\n",o);
		printf("u:%d\n",u);
		if(n!=0)
   		{
        	printf("\n");
    	}
    }
	}
	return 0;
}
