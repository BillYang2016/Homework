#include<stdio.h>

int n=1;

void func();

int main() {
	static int x=5;
	int y;
	y=n;
	printf("Main: x=%2d y=%2d n=%2d\n",x,y,n);
	func();
	printf("Main: x=%2d y=%2d n=%2d\n",x,y,n);
	func();
	return 0;
}

void func() {
	static int x=4;
	int y=10;
	x=x+2;
	n=n+10;
	y=y+n;
	printf("Func: x=%2d y=%2d n=%2d\n",x,y,n);
}