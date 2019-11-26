#include<stdio.h>

void increment();

int main() {
	increment();
	increment();
	increment();
	return 0;
}

void increment() {
	int x=0;
	x+=1;
	printf("%d",x);
}