#include<stdio.h>
int main(){
	int n,i,j,k,a,s;
	int m[100];
	while(scanf("%d",&n)!=EOF){
		a=s=0;
		for(i=0;i<n;i++){
			scanf("%d",&m[i]);
		}
		for(j=m[0];;j++){
	    	for(k=0;k<n;k++){
	    		if(j%m[k]==0)
	    		s++;
	    	}
	    	if(s==n){
	    		printf("%d\n",j);
	    		break;
	    	}else s=0;
	    }
	}
	return 0;
}

