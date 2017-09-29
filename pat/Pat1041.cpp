#include<stdio.h>
typedef struct stu{
	char id[20];
	int site;
	int trysite;
}stu;
int main(){
	int n,t,trysite[1001]={0};
	stu s[1001];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d%d",&s[i].id,&s[i].trysite,&s[i].site);
	}
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&trysite[i]);
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<n;j++){
			if(trysite[i]==s[j].trysite){
				printf("%s %d\n",s[j].id,s[j].site);
			}
		}
	}
	return 0;
} 
