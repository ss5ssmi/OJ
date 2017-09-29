#include<stdio.h>
int main(){
	int t,n,k,i,j,sum,a[8]={0},b[8]={0};
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<k;i++){
			scanf("%d%d",&a[i],&b[i]);
		}
		for(a[0]=0;a[0]<=b[0];a[0]++){
			for(a[1]=0;a[1]<=b[1];a[1]++){
				for(a[2]=0;a[2]<=b[2];a[2]++){
					for(a[3]=0;a[3]<=b[3];a[3]++){
						for(a[4]=0;a[4]<=b[4];a[4]++){
							for(a[5]=0;a[5]<=b[5];a[5]++){
								for(a[6]=0;a[6]<=b[6];a[6]++){
									for(a[7]=0;a[7]<=b[7];a[7]++){
										if(a[0]*1+a[1]*2+a[2]*3+a[3]*4+a[4]*5+a[5]*6+a[6]*7+a[7]*8==n)
											sum++;
									}
								}
							}
						}
					}
				}
			}		
		}
		printf("%d\n",sum);
	}
	return 0;
}
