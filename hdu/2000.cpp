#include<stdio.h>

int main(){
	char t;
	char s[3];
	int i,j;
	while(scanf("%c%c%c",&s[0],&s[1],&s[2])!=EOF){
		getchar();
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			if(s[i]>s[j]){ 
				t=s[i];
				s[i]=s[j];
				s[j]=t;				
			}
		}
	}
	printf("%c %c %c\n",s[0],s[1],s[2]);
	}
	return 0;
}
