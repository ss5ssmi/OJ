#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n;
	char a[100],b[100],c[100];
	scanf("%s %s",&a,&b);
	int la=strlen(a),lb=strlen(b),max=la>lb?la:lb;

	if(la>lb){
		for(i=la,j=lb;i>=0;i--,j--){
			if(j>=0){
				b[i]=b[j];
			}else{
				b[i]='0';
			}
		}
	}else{
		for(i=lb,j=la;i>=0;i--,j--){
			if(j>=0){
				a[i]=a[j];
			}else{
				a[i]='0';
			}
		}
	}
	n=max;
	for(i=0;i<max;i++,n--){
		if(n%2==0){
    		if(b[i]-a[i]<0){
        		printf("%d",(b[i]-a[i])+10);
      		}else{
        		printf("%d",b[i]-a[i]);
      		}
    	}else{
      		if((b[i]-'0'+a[i]-'0')%13==10){
        		printf("J");
      		}else if((b[i]-'0'+a[i]-'0')%13==11){
        		printf("Q");
      		}else if((b[i]-'0'+a[i]-'0')%13==12){
        		printf("K");
      		}else{
        		printf("%d",(b[i]-'0'+a[i]-'0')%13);
      		}
		}
	}

	return 0;
}
