#include<stdio.h>
int main(){
	int m,a,b,t,i,s[1000],c[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(scanf("%d%d%d",&m,&a,&b)!=EOF&&m){
		t=a+b;
		i=0;
		if(t==0){
			printf("0\n");
		}else{
			while(t!=0){  
        	s[i]=t%m;  
        	i++;  
        	t=t/m;
    		}  
   				i--;
  			for(;i>=0;i--){  
				printf("%c",c[s[i]]);    
    		}  
    		printf("\n");
		}
	}
	return 0;
}
