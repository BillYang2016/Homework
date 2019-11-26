#include<stdio.h>

int max(int,int);

int main() {
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("%d\n",c);
	return 0;
}

max(int x,int y) {
	int z;
	z=x>y?x:y;
	return z;
}