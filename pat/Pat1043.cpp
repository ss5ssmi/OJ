#include<stdio.h>
#include<string.h>
typedef struct p{
	char n;
	int c;	
}p;
int main(){
	char w[10000];
	p s[6];
	s[0].n='P';s[0].c=0;s[1].n='A';s[1].c=0;s[2].n='T';s[2].c=0;s[3].n='e';s[3].c=0;s[4].n='s';s[4].c=0;s[5].n='t';s[5].c=0;
	scanf("%s",&w);
	for(int i=0;i<strlen(w);i++){
		if(w[i]=='P'){
			s[0].c++;
		}else if(w[i]=='A'){
			s[1].c++;
		}else if(w[i]=='T'){
			s[2].c++;
		}else if(w[i]=='e'){
			s[3].c++;
		}else if(w[i]=='s'){
			s[4].c++;
		}else if(w[i]=='t'){
			s[5].c++;
		}
	}
	while(1){
		for(int i=0;i<6;i++){
			if(s[i].c!=0){
				printf("%c",s[i].n);
				s[i].c--;
			}
		}
		if(s[0].c==0&&s[1].c==0&&s[2].c==0&&s[3].c==0&&s[4].c==0&&s[5].c==0){
			break;
		}
	}
	return 0;
} 
