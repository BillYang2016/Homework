#include<stdio.h>
#include<string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num) {
	for(int i=1; i<=num; i++)putchar(ch);
}

int main() {
	show_n_char('*',WIDTH);
	putchar('\n');
	show_n_char(SPACE,12);
	printf("%s\n",NAME);
	int spaces=(WIDTH-strlen(ADDRESS))/2;
	show_n_char(SPACE,spaces);
	printf("%s\n",ADDRESS);
	show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);
	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);
	putchar('\n');
	return 0;
}