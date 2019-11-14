#include<stdio.h>

int main() {
	char s1[80],s2[40];
	printf("\nInput the first string:");
	gets(s1);
	printf("\nInput the second string:");
	gets(s2);
	int i=0,j=0;
	while(s1[i]!='\0')i++;
	while(s2[j]!='\0')s1[i++]=s2[j++];
	s1[i]='\0';
	printf("\nNew string: %s",s1);
	return 0;
}