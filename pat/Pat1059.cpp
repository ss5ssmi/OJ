#include<stdio.h>
#include<string.h>
#include<math.h>
int is(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,t,a[10000]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]=i;
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		if(a[t]==1){
			printf("%04d: Mystery Award\n", t); 
			a[t]=-1;
		}else if(a[t]&&is(a[t])==1){
			printf("%04d: Minion\n", t);
			a[t]=-1;
		}else if(a[t]==0){
			printf("%04d: Are you kidding?\n", t);
		}else if(a[t]==-1){
			printf("%04d: Checked\n",t);
		}else if(a[t]){
			printf("%04d: Chocolate\n", t);
			a[t]=-1;
		}
	}
	return 0;
}
