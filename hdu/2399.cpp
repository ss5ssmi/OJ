#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int i,j,l,flag;
	double sum,n;
	while(gets(s)){
		flag=0;
		sum=0;
		n=0;
		l=strlen(s);
		for(i=0;i<l;i++){
			if(s[i]=='A'){
				sum+=4;
				n+=1;
			}else if(s[i]=='B'){
				sum+=3;
				n+=1;
			}else if(s[i]=='C'){
				sum+=2;
				n+=1;
			}else if(s[i]=='D'){
				sum+=1;
				n+=1;
			}else if(s[i]=='F'){
				n+=1;
			}else if(s[i]==' '){
				continue;
			}else{
				flag=1;
				printf("Unknown letter grade in input\n");
				break;
			}
		}
		if(!flag){
			printf("%.2lf\n",sum/n);
		}
 	}
	return 0;
}
