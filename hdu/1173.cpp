#include<stdio.h>
float x[1000000],y[1000000];
int sort(float a[],int s,int t)
{
    int i,j;
    float mid,tmp;
    i=s;j=t;mid=a[(i+j)/2];
    while (i<=j)
    {
        while (a[i]<mid)    i++;
        while (a[j]>mid)    j--;
        if (i<=j)
        {
            tmp=a[i];a[i]=a[j];a[j]=tmp;
            i++;j--;
        }
    }
    if (s<j)    sort(a,s,j);
    if (i<t)    sort(a,i,t);
}
int main(){
    int n,i;
    while(scanf("%d",&n)!=EOF&&n){
        for(i=1;i<=n;i++){
            scanf("%f%f",&x[i],&y[i]);
        }
        sort(x,1,n); sort(y,1,n);
        printf("%.2f %.2f\n",x[n/2],y[n/2]);
    }
    return 0;
}
