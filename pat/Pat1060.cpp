#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
//	int n,a[100000];
//	int i,j,k,count;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	} 
//	i=0;
//	j=1;
//	count=0;
//	while(i<=n){
//		if(a[i]>j){
//			count++;
//			i++;
//			j++;
//		}else{
//			i++;
//			j++;
//		}
//	}
//	printf("%d\n",count);
	int n,i,count,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	i=0;
	count=1;
	while(a[i]>count&&count<=n){
		count++;
		i++;
	}
	cout<<count-1<<endl;
	return 0;
} 
