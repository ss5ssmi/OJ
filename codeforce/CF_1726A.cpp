#include<stdio.h>
int Fmax(int a, int b){
    return a>b?a:b;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a[4000], max = 0, min = 1000, tmp = 0;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            a[i+n] = a[i];
            if(i<n-1 && a[i]<min) min = a[i];
            if(i>0 && a[i]>max) max = a[i];
        }
        if(n==1) printf("0\n");
        else{
            for(int i=0;i<n;i++){
                if(a[i+n-1]-a[i] > tmp) tmp = a[i+n-1]-a[i];
            }
            int l = max-a[0], r=a[n-1]-min;
            printf("%d\n", Fmax(l,Fmax(r,tmp)));
        }
    }
    return 0;
}