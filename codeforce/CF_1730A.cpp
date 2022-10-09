#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c, a[101] = {0}, tmp, res = 0;
        scanf("%d%d", &n, &c);
        for(int i=0;i<n;i++){
            scanf("%d", &tmp);
            a[tmp]++;
        }
        for(int i=1;i<=100;i++){
            if(a[i] < c) res+=a[i];
            else res+=c;
        }
        printf("%d\n", res);
    }
    return 0;
}