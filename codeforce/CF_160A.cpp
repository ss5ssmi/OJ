#include<algorithm>
#include<cstdio>
using namespace std;
int cmp(int a,int b){
	if(a>b)
		return 1;
	else
		return 0;
}
int main(){
	int n,s[100],t;
	int i,j;
	while(scanf("%d",&n)!=EOF){
		int max=0;
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
			max+=s[i];
		}
		sort(s,s+n,cmp);
		int sum=0;
		t=1;
		for(j=0;j<n;j++){
			if(sum+s[j]>max*0.5){
				break;
			}else{
				sum+=s[j];
				t++;
			}
		}
		printf("%d\n",t);
	}
	return 0;
}
