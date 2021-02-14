#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int n, t;
	vector<int> a, b, c;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		c.push_back(t);
	}
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		b.push_back(t);
	}
	int loop = 2, max = 0;
	while(loop--) a.insert(a.end(), c.begin(), c.end());
	for(int i=0;i<2*n;i++){
		int cnt = 0;
		for(int j=0;j<n;j++){
			if(a[i+j] == b[j]) cnt++;
		}
		max = max>cnt?max:cnt;
	}
	printf("%d\n", max);
	return 0;
}
