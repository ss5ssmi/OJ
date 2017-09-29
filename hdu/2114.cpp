#include<stdio.h>
long long f(long long n){
	long long sum=0;
	for(int i=1;i<=n;i++){
            sum+=i*i*i;
        }
    return sum;
}
int main(){
    long long n,sum;
    while(scanf("%lld",&n)!=EOF&&n){
        sum=0;
        sum=f(n);
        if(sum%1000<10){
            printf("000%d\n",sum%1000);
        }else if(sum%1000<100){
            printf("00%d\n",sum%1000);
        }else if(sum%1000<1000){
            printf("0%d\n",sum%1000);
        }else{
            printf("%d\n",sum%1000);
        }
    }
    return 0;
}
