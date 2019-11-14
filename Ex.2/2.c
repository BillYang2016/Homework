#include<stdio.h>

int main() {
	int a[10],b[10];
	printf("\nInput 10 numbers: ");
	for(int i=0; i<10; i++)scanf("%d",&a[i]);
	for(int i=1; i<10; i++)b[i]=a[i]+a[i-1];
	for(int i=1; i<10; i++) {
		printf("%3d",b[i]);
		if(i%3==0)printf("\n");
	}
	return 0;
}