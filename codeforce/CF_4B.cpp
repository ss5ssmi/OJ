#include<bits/stdc++.h>
using namespace std;
int main() {
	int d,sum,maxx[30],minn[30],ans[30];
	cin>>d>>sum;
	for(int i=0; i<d; i++) {
		cin>>minn[i]>>maxx[i];
		ans[i]=minn[i];
		sum-=minn[i];
	}
	if(sum<0) {
		printf("NO\n");
		return 0;
	}
	for(int i=d-1; i>=0; i--) {
		int tmp=maxx[i]-minn[i];
		if(sum>=tmp) {
			ans[i]+=tmp;
			sum-=tmp;
		} else if(sum>0){
			ans[i]+=sum;
			sum=0;
			break;
		}
	}
	printf("%s\n",sum!=0?"NO":"YES");
	for(int i=0; i<d && sum==0; i++) {
		printf("%d",ans[i]);
		printf("%c",i==d-1?'\n':' ');
	}
	return 0;
}
