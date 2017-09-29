#include<stdio.h>
#include<math.h>
int f(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int i=0,t,con;
	while(scanf("%d",&t)!=EOF){
		con=0;
		for(i=3;i<=t-2;i++){
			if(f(i)&&f(i+2)){
				con++;
			}
		}
		printf("%d\n",con);
	}
	return 0;
}

