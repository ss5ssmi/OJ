#include<stdio.h>
#include<string.h>
int main(){
	int n,aw,bw,p,al,bl,ab,aj,ac,bb,bj,bc;
	char a,b,x,y;
	aw=al=bw=bl=p=ab=aj=ac=bb=bj=bc=0;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%c %c",&a,&b);
		getchar();
		if(a=='B'&&b=='B'){
			p++;
		}else if(a=='C'&&b=='C'){
			p++;
		}else if(a=='J'&&b=='J'){
			p++;
		}else if(a=='C'&&b=='J'){
			aw++;bl++;ac++;
		}else if(a=='J'&&b=='C'){
			al++;bw++;bc++;
		}else if(a=='J'&&b=='B'){
			aw++;bl++;aj++;
		}else if(a=='B'&&b=='J'){
			al++;bw++;bj++;
		}else if(a=='C'&&b=='B'){
			bw++;al++;bb++;
		}else if(a=='B'&&b=='C'){
			aw++;bl++;ab++;
		}
	}
	printf("%d %d %d\n",aw,p,al);
	printf("%d %d %d\n",bw,p,bl);
	if(ab>=ac&&ab>=aj){
		printf("B ");
	}else if(ac>=aj){
		printf("C ");
	}else{
		printf("J ");
	}
	if(bb>=bc&&bb>=bj){
		printf("B");
	}else if(bc>=bj){
		printf("C");
	}else{
		printf("J");
	}
	return 0;
}
