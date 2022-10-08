#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, a[100];
        scanf("%d%d", &n, &k);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        long long res = 0;
        for(int i=0;i<k;i++){
            int tmp = 0;
            for(int j=i;j<n;j+=k)
                if(a[j] > tmp) tmp = a[j];
            res += tmp;
        }
        printf("%lld\n", res);
    }
    return 0;
}