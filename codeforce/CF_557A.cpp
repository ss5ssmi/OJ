	#include<bits/stdc++.h>
	using namespace std;
	int main() {
		int n,max1,min1,max2,min2,max3,min3;
		cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
		if(min1+min2+min3==n){
			printf("%d %d %d\n",min1,min2,min3);
			return 0;
		}
		if(max1+max2+max3==n){
			printf("%d %d %d\n",max1,max2,max3);
			return 0;
		}
		int f=min1,s=min2,t=min3,sum=f+s+t;
		if(sum<n){
			if(sum+(max1-min1)<=n) {f+=max1-min1;sum+=max1-min1;}
			else {f+=n-sum;goto end;}
			if(sum+(max2-min2)<=n) {s+=max2-min2;sum+=max2-min2;}
			else {s+=n-sum;goto end;}
			if(sum+(max3-min3)<=n) {t+=max3-min3;sum+=max3-min3;}
			else {t+=n-sum;goto end;}
		}
		end:printf("%d %d %d\n",f,s,t);
		return 0;
	}
