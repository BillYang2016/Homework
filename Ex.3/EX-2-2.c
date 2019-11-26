#include<stdio.h>
#include<string.h>

void func(char *c) {
	int n=strlen(c);
	for(int i=0; i<=n/2; i++) {
		char tmp=c[i];
		c[i]=c[n-i-1];
		c[n-i-1]=tmp;
	}
}

int main() {
	char c[55];
	gets(c);
	func(c);
	int n=strlen(c);
	for(int i=0; i<n; i++)printf("%c",c[i]);
	putchar('\n');
	return 0;
}