#include<stdio.h>

int getMax(int n,int a[]) {
	int Max=0;
	for(int i=0; i<n; i++)if(a[i]>Max)Max=a[i];
	return Max;
}

int main() {
	int n=8,a[]= {22,55,45,36,46,85,23,34};
	printf("%d\n",getMax(n,a));
	return 0;
}