#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char b[100];
		scanf("%s", &b);
		if(strlen(b)>2){
			int l = strlen(b); 
			for(int i=0;i<l;i++){
				if(i==0 || i==(l-1)){
					printf("%c", b[i]);
				}else{
					printf("%c", b[i]);
					i++;
				}
			}
			printf("\n"); 
			continue;
		}
		printf("%s\n", b);
	}
	return 0;
}
