#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		 int n, a[100], s[101] = {0}, max = 0;
		 scanf("%d", &n);
		 for(int i=0;i<n;i++){
		 	scanf("%d", &a[i]);
		 	s[a[i]]++;
		 	if(s[a[i]] > max) max = s[a[i]];
		 }
		 printf("%d\n", max);
	} 
	return 0;
}
