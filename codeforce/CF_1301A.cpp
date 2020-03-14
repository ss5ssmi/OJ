#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char a[101],b[101],c[101];
		scanf("%s",&a);
		scanf("%s",&b);
		scanf("%s",&c);
		int flag = 0, lena = strlen(a), lenb = strlen(b), lenc = strlen(c);
		if(lena!=lenb || lena!=lenc || lenb!=lenc) flag = 1;
		for(int i=0;i<lena && !flag;i++){
			if((a[i] != b[i] && a[i] != c[i] && b[i] != c[i]) || (a[i] == b[i] && a[i] != c[i])){
				flag = 1;
			}
 		}
 		printf("%s\n",flag?"NO":"YES");
	}
	return 0;
}
