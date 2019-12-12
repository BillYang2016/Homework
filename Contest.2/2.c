#include<stdio.h>

#define N 10

int Max(int a[N]);

int main() {
	int a[]= {3,2,6,4,15,23,7,9,14,21};
	printf("%d\n",Max(a));
	return 0;
}

int Max(int a[N]) {
	int ans=a[0];
	for(int i=1; i<N; i++)if(a[i]>ans)ans=a[i];
	return ans;
}