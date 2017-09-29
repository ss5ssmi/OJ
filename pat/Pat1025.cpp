#include<stdio.h>
typedef struct node{
	char id[5];
	int data;
	char next[5];
}node;
int main(){
	int n,k;
	char id[5];
	node p[10010],t;
	scanf("%s%d%d",&id,&n,&k);
	for(int i=0;i<n;i++){
		scanf("%s%d%s",&p[i].id,&p[i].data,&p[i].next); 
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(p[i].data>p[j].data){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	printf("\n");
	if(n-k>=k){
		for(int i=k-1;i>=0;i--){
			if(i!=0){
				printf("%s %d %s\n",p[i].id,p[i].data,p[i-1].id);
			}else{
				printf("%s %d %s\n",p[i].id,p[i].data,p[n-1].id);
			}
		}
		for(int i=n-1;i>=k;i--){
			if(i!=k){
				printf("%s %d %s\n",p[i].id,p[i].data,p[i-1].id);
			}else{
				printf("%s %d -1\n",p[i].id,p[i].data);
			}
		}
	}else{
		for(int i=k-1;i>=0;i--){
			if(i!=0){
				printf("%s %d %s\n",p[i].id,p[i].data,p[i-1].id);
			}else{
				printf("%s %d %s\n",p[i].id,p[i].data,p[k-1].next);
			}
		}
		for(int i=k;i<n;i++){
			if(i!=n-1){
				printf("%s %d %s\n",p[i].id,p[i].data,p[i+1].id);
			}else{
				printf("%s %d %s\n",p[i].id,p[i].data,p[i].next);
			}
		}
	}
	return 0;
}
