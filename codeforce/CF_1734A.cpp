#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a, const void * b){
    return *(int*)a - *(int*)b;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a[300];
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmp);
        int res = 1e9;
        for(int i=1;i<n-1;i++){
            if((a[i+1]-a[i-1]) < res)
                res = a[i+1]-a[i-1];
        }
        printf("%d\n", res);
    }
    return 0;
}