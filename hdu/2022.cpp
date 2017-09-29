#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j,s,x,y;
    int a[100][100];
    while(scanf("%d%d",&m,&n)!=EOF){
        s=x=y=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                if(abs(s)<abs(a[i][j])){
                    s=a[i][j];
                    x=i;y=j;
                }
            }
        }
//        for(i=0;i<m;i++){
//            for(j=0;j<n;j++){
//                if(abs(s)==abs(a[i][j])){
//                    x=i;y=j;
//                    goto end;
//                }
//            }
//        }
        /*end:*/printf("%d %d %d\n",x+1,y+1,s);
    }
    return 0;
}
