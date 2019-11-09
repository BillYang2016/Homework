#include<stdio.h>

const int n=5;
int a[n+1];

int main() {
	for(int i=1; i<=n; i++)scanf("%d",&a[i]);
	for(int i=1; i<=n; i++)printf("%d ",a[i]);
	putchar('\n');
	for(int i=1; i<=n/2; i++) {
		int tmp=a[n-i+1];
		a[n-i+1]=a[i];
		a[i]=tmp;
	}
	for(int i=1; i<=5; i++)printf("%d ",a[i]);
	putchar('\n');
	return 0;
}