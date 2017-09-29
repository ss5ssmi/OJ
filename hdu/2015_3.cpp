#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h;
	int sum,sum1,sum2;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					for(e=1;e<10;e++){
						for(f=0;f<10;f++){
							for(g=0;g<10;g++){
								for(h=0;h<10;h++){
									sum1=a*1000+b*100+c*10+d;
									sum2=e*1000+f*100+g*10+b;
									sum=e*10000+f*1000+c*100+b*10+h;
									if(sum1+sum2==sum){
										if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&d!=e&&d!=f&&d!=g&&d!=h&&e!=f&&e!=g&&e!=h&&f!=g&&f!=h&&g!=h){
											printf("%d%d%d%d\n",e,f,g,b);
											goto end;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	end:return 0;
} 
