#include<stdio.h>
#include<math.h>

int fun(int a,int b) {return abs(a-b);}

int main() {
	int a=1,b=-5,c;
	c=fun(a,b);
	printf("%d\n",c);
	return 0;
}