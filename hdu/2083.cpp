#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j,t,sum;
    int s[500]={0};
    scanf("%d",&m);
    while(m--){
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(s[i]>s[j]){
                    t=s[i];s[i]=s[j];s[j]=t;
                }
            }
        }
        for(i=0;i<n;i++){
            sum+=abs(s[n/2]-s[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
