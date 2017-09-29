#include<stdio.h>
int pow(int a,long long b){
    long long res=1;
    while(b){
        if(b&1)
            res=(res*a)%100;    
        a=(a*a)%100;
        b>>=1;
    }
    return res;
}
int main(){
    int n,m,i;
    long long s;
    while(scanf("%d",&n)&&n){
        for(i=1;i<=n;i++){
            scanf("%d",&m);
            s=(long long)(pow(4,m-1)+pow(2,m-1))%100;
            printf("Case %d: %lld\n",i,s);
        }
    }
    return 0;
}
