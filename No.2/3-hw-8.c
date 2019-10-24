#include<stdio.h>

int main() {
	char c1=getchar(),c2=getchar();
	putchar(c1),putchar(c2),putchar('\n');
	printf("%c%c\n",c1,c2);
	return 0;
}