#include<stdio.h>

int main() {
	const int rows=6,chars=6;
	for(int row=0; row<rows; row++) {
		for(char ch=row+'A'; ch<chars+'A'; ch++)printf("%c",ch);
		putchar('\n');
	}
	return 0;
}