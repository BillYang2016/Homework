#include<stdio.h>
#include<string.h>

int main() {
	char c='a',t[50];
	int n,j;
	printf("\nInput a string:");
	gets(t);
	n=strlen(t);
	for(int k=0; k<n; k++) {
		if(t[k]==c) {j=k;break;}
		else j=-1;
	}
	printf("\n Position is %d",j);
	return 0;
}