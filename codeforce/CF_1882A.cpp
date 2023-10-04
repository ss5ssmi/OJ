#include<stdio.h>
int main(){
    int t,n,a[100];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int cnt = 1;
        if(a[0] == 1) cnt = 2;
        for(int i = 1; i < n; i++){
            if(a[i] == cnt+1) cnt++;
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}