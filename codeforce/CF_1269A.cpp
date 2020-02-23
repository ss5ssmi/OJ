#include<stdio.h>
#include<math.h>
int isComposite(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<(1000000000-n);i++){
		if(isComposite(i) && isComposite(i+n)){
			printf("%d %d\n",i+n, i);
			break;
		}
	}
	return 0;
}
