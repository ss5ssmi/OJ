#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, cnt[20], max = 0, res;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &cnt[i]);
            if(cnt[i] > max) max = cnt[i],res = i+1;
        }
        printf("%d\n", res);
    }
    return 0;
}