#include<cstdio> 
#include<algorithm>
using namespace std;
int main(){
	int n,s[100],p[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		p[i]=s[i];
	}
	for(int i=0;i<n;i++){
		int x=s[i];
		while(x!=1){
			if(x%2==0){
				x/=2;
				for(int j=0;j<n;j++){
					if(p[j]==x){
						p[j]=0;
					}
				}
			}else if(x%2==1){
				x=((3*x)+1)/2;
				for(int j=0;j<n;j++){
					if(p[j]==x){
						p[j]=0;
					}
				}
			}
		}
	}
	sort(p,p+n);
	for(int i=n-1;i>=0;i--){
		printf("%d",p[i]);
		if(p[i-1]){
			printf(" ");
		}else{
			break;
		}
	}printf("\n");
	return 0;
}
