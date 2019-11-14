#include<stdio.h>

#define N 5

int main() {
	int a[N]= {8,6,5,4,1};
	printf("\nThe original array is:");
	for(int i=0; i<N; i++)printf("%4d", a[i]);
	for(int i=0; i<N/2; i++) {
		int temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
	printf("\nThe new array is:");
	for(int i=0; i<N; i++)printf("%4d",a[i]);
	putchar('\n');
	return 0;
}