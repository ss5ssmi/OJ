#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[1000],b[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int maxa=-1,maxb=-1;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int tmpa=a[i],tmpb=b[i];
			for(int k=i;k<=j;k++){
				tmpa|=a[k];
				tmpb|=b[k];
			}
			maxa=max(maxa,tmpa);
			maxb=max(maxb,tmpb);
		}
	}
	printf("%d\n",maxa+maxb);
	return 0;
}
