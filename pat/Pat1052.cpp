#include<stdio.h>
#include<string.h>
typedef struct{
	char s[5];
}string;
int main(){
	char a[500],b[500],c[500];
	int j,n,d1,d2,d3,d4,d5,a1[10]={0},b1[10]={0},c1[10]={0},a2=0,b2=0,c2=0;
	gets(a);
	gets(b);
	gets(c);

	for(int i=0;i<strlen(a);i++){
		if(a[i]=='['){
			a1[a2]=i+1;
			a2++;
		}
	}
	for(int i=0;i<strlen(b);i++){
		if(b[i]=='['){
			b1[b2]=i+1;
			b2++;
		}
	}
	for(int i=0;i<strlen(a);i++){
		if(c[i]=='['){
			c1[c2]=i+1;
			c2++;
		}
	}
	
//	for(int i=0,j=0;i<a2;i++){
//		for(j=a1[i];a[j]!=']';j++){
//			printf("%c",a[j]);
//		}
//		printf(" ");
//	}
//	for(int i=0,j=0;i<b2;i++){
//		for(j=b1[i];b[j]!=']';j++){
//			printf("%c",b[j]);
//		}
//		printf(" ");
//	}
//	for(int i=0,j=0;i<c2;i++){
//		for(j=c1[i];c[j]!=']';j++){
//			printf("%c",c[j]);
//		}
//		printf(" ");
//	}
//	printf("%d %d %d %d %d\n",a1[6],b1[8],c1[1],b1[5],a1[5]);
//	for(int i=b1[7];b[i]!=']';i++){
//		printf("%c",b[i]);
//	}
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d %d",&d1,&d2,&d3,&d4,&d5);
		
		if(d1>a2 || d2>b2 || d3>c2 || d4>b2 || d5>a2 || d1<1 || d2<1 || d3<1 || d4<1 || d5<1){
			printf("Are you kidding me? @\\/@\n");
		}else{
			d1--;d2--;d3--;d4--;d5--;
			for(int i=a1[d1];a[i]!=']';i++){
				printf("%c",a[i]);
			}printf("(");
			for(int i=b1[d2];b[i]!=']';i++){
				printf("%c",b[i]);
			}
			for(int i=c1[d3];c[i]!=']';i++){
				printf("%c",c[i]);
			}
			for(int i=b1[d4];b[i]!=']';i++){
				printf("%c",b[i]);
			}printf(")");
			for(int i=a1[d5];a[i]!=']';i++){
				printf("%c",a[i]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
