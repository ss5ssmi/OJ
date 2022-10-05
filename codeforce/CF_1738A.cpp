#include<stdio.h>
#include<stdlib.h>
int cmpFun(const void * a, const void * b){
    return *(int*)a - *(int*)b;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,a[100000],b,b1[50000],b2[50000], fireCnt = 0,frostCnt = 0;
        scanf("%d", &n);
        for(int i=0,j=0,k=0;i<n;i++){
            scanf("%d", &a[i]);
            if(a[i]) frostCnt++;
            else fireCnt++;
        }
        for(int i=0,j=0,k=0;i<n;i++){
            scanf("%d", &b);
            if(a[i]) b1[j++]=b;
            else b2[k++]=b;
        }
        qsort(b1,frostCnt,sizeof(int),cmpFun);
        qsort(b2,fireCnt,sizeof(int),cmpFun);
        long long res = 0;
        if(fireCnt == frostCnt){
            if(b1[0] < b2[0]){
                res+=b1[0];
                for(int i=1;i<frostCnt;i++){
                    res+=2*b1[i];
                }
                for(int i=0;i<fireCnt;i++){
                    res+=2*b2[i];
                }
            }else{
                res+=b2[0];
                for(int i=1;i<fireCnt;i++){
                    res+=2*b2[i];
                }
                for(int i=0;i<frostCnt;i++){
                    res+=2*b1[i];
                }
            } 
        }else{
            if(fireCnt > frostCnt){
                for(int i=0;i<frostCnt;i++){
                    res+=2*b1[i];
                }
                for(int i=0;i<fireCnt;i++){
                    if(i<(fireCnt-frostCnt)) res+=b2[i];
                    else res+=2*b2[i];
                }
            }else{
                for(int i=0;i<frostCnt;i++){
                    if(i<(frostCnt-fireCnt)) res+=b1[i];
                    else res+=2*b1[i];
                }
                for(int i=0;i<fireCnt;i++){
                    res+=2*b2[i];
                }
            }
        }
        printf("%lld\n", res);
    }
    return 0;
}