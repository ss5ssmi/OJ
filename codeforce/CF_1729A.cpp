#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int first = a-1, second = b>c?b-1:c-b+c-1;
        printf("%d\n", first==second?3:(first<second?1:2));
    }
    return 0;
}