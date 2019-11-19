#include<stdio.h>

int main() {
	putchar('\n');
	for(int i=1; i<=5; i++) {
		putchar(' ');
		for(int j=1; j<i; j++)putchar(' ');
		for(int j=1; j<=5; j++)putchar('*');
		putchar('\n');
	}
	return 0;
}