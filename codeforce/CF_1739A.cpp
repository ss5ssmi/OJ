#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        printf("%d %d\n", n%2?(n/2)+1:n/2, m%2?(m/2)+1:m/2);
    }
    
    return 0;
}