#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, s[100], e[100];
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d%d", &s[i], &e[i]);
            if(i && s[i] >= s[0] && e[i] >= e[0]) s[0] = -1;
        }
        printf("%d\n", s[0]);
    }
    return 0;
}