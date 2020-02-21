#include<stdio.h>
#include<map>
using namespace std;
int abs(int a, int b){
	return a-b>0?a-b:b-a;
}
int main(){
	int t, n, s, k;
	scanf("%d",&t);
	while(t--){
		map<int, int> a;
		int ai; 
		scanf("%d%d%d",&n,&s,&k);
		for(int i=0;i<k;i++){
			scanf("%d",&ai);
			a[ai] = 1;
		}
		int min = 1e9;
		for(int i=s;i<=n;i++){
			if(a[i] != 1 && abs(i,s) < min){
				min = abs(i,s);
			}else if(abs(i,s) > min){
				break;
			} 
		}
		for(int i=s;i>=1;i--){
			if(a[i] != 1 && abs(i,s) < min){
				min = abs(i,s);
			}else if(abs(i,s) > min){
				break;
			} 
		}
		printf("%d\n",min);
	}
	return 0;
}
