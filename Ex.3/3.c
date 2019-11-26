#include<stdio.h>

void yesno(char ch) {
	switch (ch) {
		case 'y':
		case 'Y': printf("\n This is YES. \n");break;
		case 'n':
		case 'N': printf("\n This is NO. \n");
	}
}

int main() {
	char ch;
	printf("\n Enter a char ‘y’,’Y’or ’n’,’N’:");
	ch=getchar();
	printf("ch:%c",ch);
	yesno(ch);
	return 0;
}