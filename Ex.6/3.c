#include<stdio.h>

int strcmp(char *s,char *t);
int abs(int x);

int main() {
	char s[105],t[105];
	gets(s);
	gets(t);
	printf("%d\n",strcmp(s,t));
	return 0;
}

int abs(int x) {return x>0?x:-x;}

int strcmp(char *s,char *t) {
	while(*s!='\0'&&*t!='\0') {
		if(*s!=*t)return abs(*s-*t);
		s++;
		t++;
	}
	return abs(*s-*t);
}