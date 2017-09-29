#include<stdio.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		if(100>=x&&x>=90){
			printf("A\n");
		}else if(89>=x&&x>=80){
			printf("B\n");
		}else if(79>=x&&x>=70){
			printf("C\n");
		}else if(69>=x&&x>=60){
			printf("D\n");
		}else if(59>=x&&x>=0){
			printf("E\n");
		}else{
			printf("Score is error!\n");
		}
	}
	return 0;
}
