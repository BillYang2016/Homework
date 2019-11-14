#include<stdio.h>

#define N 10

int main() {
	static int a[N]= {5,4,3,2,1,9,8,7,6,0};
	printf("\nThe array is:\n");
	for(int i=0; i<N; i++)printf("%5d",a[i]);
	for(int i=0; i<N-1; i++) {
		int min=i,j;
		for(int j=i+1; j<N; j++)
			if(a[min]>a[j])min=j;
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
	printf("\n The sorted numbers: \n");
	for(int i=0; i<N; i++)printf("%5d",a[i]);
	putchar('\n');
	return 0;
}