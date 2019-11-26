#include<stdio.h>

int shift(int );

int main() {
	static int y[2]= {15,25};
	int z=20;
	z=shift(y[0]);
	printf("%d,%d\n",y[0],z);
	return 0;
}

shift(int a) {
	a*=2;
	return a;
}