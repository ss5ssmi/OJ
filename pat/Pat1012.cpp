#include<stdio.h>
#include<string.h>
int main(){
	int n,s,num,flag=1,f1=0,f2=0,f3=0,f4=0,f5=0,con=0,max=0,a1,a2,a3,a4;
	scanf("%d",&n);
	a1=a2=a3=a4=0;
		for(int i=0;i<n;i++){
			scanf("%d",&s);
			num=s%5;
			if(num==0&&s%2==0){
				f1=1;
				a1+=s;
			}else if(num==1){
				f2=1;
				a2+=((flag%2!=0)?s:(-1*s));
				flag++;
			}else if(num==2){
				f3=1;
				a3++;
			}else if(num==3){
				f4=1;
				a4+=s;
				con++;
			}else if(num==4){
				f5=1;
				if(s>max){
					max=s;
				}
			}
		}
		if(f1){
			printf("%d ",a1);
		}else{
			printf("N ");
		}
		if(f2){
			printf("%d ",a2);
		}else{
			printf("N ");
		}
		if(f3){
			printf("%d ",a3);
		}else{
			printf("N ");
		}
		if(f4){
			printf("%.1f ",1.0*a4/con);
		}else{
			printf("N ");
		}
		if(f5){
			printf("%d",max);
		}else{
			printf("N");
		}
	return 0;
} 
