#include<stdio.h>
#include<string.h>
float cal(char s[]){
	int l=strlen(s);
	int	a,b,c,i,j=0;
	float sum=1.0;
	l1:for(i=j;;i++){
		if(s[i]>='0'&&s[i]<='9'){
			a=s[i];
			printf("%c\n",a);
			j=i++;
		}
		if(s[i]=='+'){
			sum+=a;j=i++;
		}
		if(s[i]=='-'){
			sum-=a;j=i++;
		}
		if(s[i]=='*'){
			sum*=a;j=i++;
		}
		if(s[i]=='/'){
			sum/=a;j=i++;
		}
		if(s[i]!='\0'){
			goto l1;
		}else{
			break;
		}
	}
	return sum;
} 
int main(){
	char s[200];
	while(scanf("%s",&s)!=EOF&&s[0]!='0'){
		printf("%.2f\n",cal(s));	
	}
	return 0;
}
