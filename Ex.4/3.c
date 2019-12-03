#include<stdio.h>

#define N 5

int main() {
	int *p,i,a[N];
	p=a;
	printf("\nInput 5 numbers:");
	for(; p<a+N; p++)scanf("%d",p);
	p=a;
	printf("\nOutput array:");
	for(; p<a+N; p++)printf("%d ",*p);
	return 0;
}