#include<stdio.h>

#define N 1000

int fun(int *p);

int main() {
	int a[1005];
	for(int i=0; i<1000; i++)a[i]=i+1;
	int n=fun(a);
	for(int i=0; i<n; i++) {
		printf("%4d ",a[i]);
		if((i+1)%10==0)putchar('\n');
	}
	return 0;
}

int fun(int *p) {
	int cnt=0;
	for(int i=0; i<N; i++) {
		int x=*(p+i);
		if((x%7==0||x%11==0)&&!(x%7==0&&x%11==0))*(p+(cnt++))=x;
	}
	return cnt;
}