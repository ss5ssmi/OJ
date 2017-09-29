#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	char a[50],b[50];
	int n,c=0;
	double temp,sum=0.0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%lf",&temp);
		sprintf(b,"%.2lf",temp);
		int flag=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j]){
				flag=1;
				break;
			}
		}
		if(flag || temp<-1000 || temp>1000){
			printf("ERROR: %s is not a legal number\n",a);
			continue;
		}else{
			sum+=temp;
			c++;
		}
	}
	if(c==1){
		printf("The average of 1 number is %.2lf",sum);
	}else if(c>1){
		printf("The average of %d numbers is %.2lf",c,sum/c);
	}else{
		printf("The average of 0 numbers is Undefined");
	}
	return 0;
}
