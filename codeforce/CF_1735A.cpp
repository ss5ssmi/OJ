#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", ((n-3)/3)-1);
    }
    return 0;
}