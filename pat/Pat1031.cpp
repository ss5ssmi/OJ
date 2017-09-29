#include<stdio.h>
#include<string.h>

int quan(char s[18]){
	int w[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };  
    char z[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
	int t=0;
	for(int i=0;i<17;i++){
		t=t+(s[i]-48)*w[i];
	}
	t=t%11;
	if(z[t]==s[17]) 
		return 1; 
	else
		return 0;
} 
int c(char a[18]){
	for(int i=0;i<17;i++){
		if(a[i]<'0' || a[i]>'9'){
			return 0;
		}
	}
	return 1;
}
int main(){
	char id[18];
	int n,count=0,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",id);
		if(c(id)==1&&quan(id)==1){
			count++;
		}else{
			printf("%s\n",id);
		}
	}
	if(count==n&&n>=1&&n<=100){
		printf("All passed\n");
	}
	return 0;
} 
