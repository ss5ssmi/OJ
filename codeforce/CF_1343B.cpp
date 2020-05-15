#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if((n/2)%2==1){
			printf("NO\n");
		}else{
			printf("YES\n");
			int even = 2, odd = 1, len = n/2, cnte = 0, cnto = 0;
			for(int i=0;i<len;i++){
				printf("%d ", even);
				cnte+=even;
				even+=2;
			}
			for(int i=0;i<len-1;i++){
				printf("%d ", odd);
				cnto+=odd;
				odd+=2;
				if(i==len-2){
					printf("%d\n", cnte-cnto);
				}
			}
		}
	}
	return 0;
}
