#include<stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar() {
	for(int i=1; i<=WIDTH; i++)putchar('*');
	putchar('\n');
}

int main() {
	starbar();
	printf("%s\n%s\n%s\n",NAME,ADDRESS,PLACE);
	starbar();
	return 0;
}