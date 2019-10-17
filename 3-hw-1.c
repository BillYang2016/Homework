#include<stdio.h>
#include<math.h>

int main() {
	double r=0.07,n=10;
	double p=pow(1+r,n);
	printf("addition = %lf",(p-1)*100);
	putchar('%');
	putchar('\n');
	return 0;
}