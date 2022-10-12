#include<stdio.h>
#include<string.h>
int val(const char *a){
    int len = strlen(a), res = 0;
    if(a[len-1] == 'L') res = len;
    else if(a[len-1] == 'S') res = -len;
    
    return res;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[55], b[55];
        scanf("%s %s", &a, &b);
        int va = val(a), vb = val(b);
        printf("%c\n", va>vb?'>':va==vb?'=':'<');
    }
    return 0;
}