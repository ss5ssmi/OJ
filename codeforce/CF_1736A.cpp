#include<stdio.h>
int abs(int a){
    return a>0?a:-a;
}
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a[100], b[100], dis = 0, one = 0, onea = 0;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            if(a[i]) onea++;
        }
        for(int i=0;i<n;i++){
            scanf("%d", &b[i]);
            if(b[i]) one++;
            if(b[i] != a[i]) dis++;
        }
        printf("%d\n", min(dis,abs(one-onea)+1) );
    }
    return 0;
}