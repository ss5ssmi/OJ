#include<stdio.h>
#include<string.h>
int main(){
	int t,n=0,y,m,d;
	int hy=2015,hm=13,hd=32;
	int ly=0,lm=0,ld=0;
	char name[8],old[8],yon[8];
	
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%s %d/%d/%d",&name,&y,&m,&d);
		if( (y>1814 && y<2014) || (y==1814 && m>9) || (y==1814 && m==9 && d>=6) || (y==2014 && m<9) || (y==2014 && m==9 && d<=6) ){
			n++;
			if((y<hy) || (y==hy && m<hm) || (y==hy && m==hm && d<hd)){
				hy=y;hm=m;hd=d;
				strcpy(old,name);
			}
			if((y>ly) || (y==ly && m>lm) || (y==ly && m==lm && d>ld)){
				ly=y;lm=m;ld=d;
				strcpy(yon,name);
			}
		}
	}
	if(n==0){
		printf("0\n");
	}else{
		printf("%d %s %s\n",n,old,yon);
	}
	
	return 0;
}
