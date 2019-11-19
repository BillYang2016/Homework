#include<stdio.h>
#include<string.h>

int min(int a,int b) {return a<b?a:b;}

int isupper(char c) {return c>='A'&&c<='Z';}

int islower(char c) {return c>='a'&&c<='z';}

int isdigit(char c) {return c>='0'&&c<='9';}

int isspace(char c) {return c==' ';}

int main() {
	int upp=0,low=0,dig=0,spa=0,oth=0;
	for(int i=1; i<=3; i++) {
		char s[80];
		gets(s);
		int len=min(80,strlen(s));
		for(int j=0; j<len; j++) {
			char c=s[j];
			if(isupper(c))upp++;
			else if(islower(c))low++;
			else if(isdigit(c))dig++;
			else if(isspace(c))spa++;
			else oth++;
		}
	}
	printf("upper:%d\nlower:%d\ndigit:%d\nspace:%d\nother:%d\n",upp,low,dig,spa,oth);
	return 0;
}