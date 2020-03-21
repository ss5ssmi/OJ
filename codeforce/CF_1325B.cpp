#include<stdio.h>
#include<map>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100000];
		map<int, int> map; 
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			map[a[i]]++;
		}
		printf("%d\n", map.size());
	}
	return 0;
}
