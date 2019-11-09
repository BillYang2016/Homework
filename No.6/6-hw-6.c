#include<stdio.h>

int a[15][15];

int main() {
	int n=10;
	for(int i=1; i<=n; i++) {
		a[i][1]=a[i][i]=1;
		for(int j=2; j<i; j++)a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++)printf("%5d ",a[i][j]);
		putchar('\n');
	}
	return 0;
}