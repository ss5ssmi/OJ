#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n,t=0;
	double s[100000],p;
	scanf("%d%lf",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i]);
	}
	sort(s,s+n);
	for(int i=0;i<n;i++){
		for(int j=i+t;j<n;j++){
			if(s[j]>s[i]*p)
				break;
			if(j-i+1>t)
				t=j-i+1;
		}
	}
	printf("%d\n",t);
	return 0;
}
