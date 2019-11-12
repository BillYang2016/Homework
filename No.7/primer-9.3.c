#include<stdio.h>

int imin(int x,int y) {return x<y?x:y;}

int main() {
	puts("Enter a pair of integers (q to quit):");
	int a,b;
	while(scanf("%d%d",&a,&b)==2) {
		printf("The lesser of %d and %d is %d.\n",a,b,imin(a,b));
		puts("Enter a pair of integers (q to quit):");
	}
	puts("Bye.");
	return 0;
}